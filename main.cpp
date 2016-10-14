#include <iostream>
#include <math.h>

using namespace std;
// Эта программа решает систему уравнений y=sqrt(x-2)/(5+x^2) при x>=2 y=(x-2)/abs(5-x^2) если x<2
int main() {
    double x,y;
    cout << "x=";
    cin >> x;

    if (x>=2)
        y=sqrt(x-2)/(5+pow(x,2));
    else
        y=(x-2)/fabs(5-pow(x,2));

    cout << "y=" << y;
    return 0;
}