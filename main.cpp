#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float y;
    float x;
    cout <<"Введите x ";
    cin >> x;
    y = (pow(x,5) + pow(x,3) + 2)/(pow(x,2) + 10);
    cout <<"Вывод";
    cout << y;
}