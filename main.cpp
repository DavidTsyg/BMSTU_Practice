#include <iostream>
#include <boost/algorithm/string.hpp>
#include <gtest/gtest.h>
#include <boost/filesystem.hpp>
using namespace std;
using namespace boost::filesystem;

/*
path& remove_filename();
path& replace_extension(const path& new_extension = path());
path  root_name() const;
path  root_directory() const;
path  root_path() const;
path  relative_path() const;
path  parent_path() const;
path  filename() const;
path  stem() const;
path  extension() const;
bool is_absolute() const;
bool is_relative() const;
path& operator/=(const path& p);

path::iterator
*/

TEST(Arithm, Sum) {
ASSERT_EQ(8, 3+5);
}

TEST(Path, CanGetCurrent) {
ASSERT_FALSE(boost::filesystem::current_path().empty());
}

TEST(Path,remove_filename){
string s="/home/bin/user/1.txt";
path pth(s);
ASSERT_EQ("/home/bin/user", pth.remove_filename().native());
}

TEST(Path, replace_extension){
string s= "/home/bin/user/1.txt";
path pth(s);
path ext("bin");
ASSERT_EQ("/home/bin/user/1.bin", pth.replace_extension(ext).native());

}

TEST(Path, root_name){
    string s="/home/bin/user/1";
    path pth(s);
    ASSERT_EQ("", pth.root_name().native());
}

TEST(Path, stem){
    string s = "/home/bin/user/1.txt";
    path pth(s);
    ASSERT_EQ(pth.filename().native(), pth.stem().replace_extension(pth.extension()).native());
    ASSERT_EQ("1", pth.stem().native());
}

TEST(Path, iterator){
    string s="/home/bin/user/1.txt";
    vector<string> v;
    boost::split(v,s,boost::is_any_of("/"));
    v[0]="/";
    EXPECT_EQ(5, v.size());
    path pth(s);
    auto it=v.begin();
    for(auto p = pth.begin();p!=pth.end();p++)
    {
        EXPECT_EQ(*it, *p);
        ++it;
    }

}

vector<path> listFilesRec(const path& p){
    vector<path> paths;
    boost::filesystem::recursive_directory_iterator it{p};
    while(it!=decltype(it)()) {
        paths.push_back(*it);
        ++it;
    }
    return paths;
}

string getFileInfo(const path& p){
    auto stat = status(p);
    if(stat.type()==file_type::directory_file)
        return "D";
    if(stat.type()==file_type::regular_file)
        return "F";
    if(stat.type()==file_type::symlink_file)
        return "S";
    return "UNDEFINED";
}

int main(int argc, char* argv[]) {
/*    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
    */
    auto vec = listFilesRec("/home/pca26/ClionProjects");
    for(const auto &i:vec) {
        cout << i.filename() << getFileInfo(i) << endl;

    }
    return 0;
}
