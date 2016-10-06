#include <iostream>
#include <cmath>
using namespace std;
//Программа находит значение функции y=(x^5 + x^3 + 2)/(x^2 + 10) в выбранной точке x и выводит это значение
int main() {
//Задание переменных
    float y;
    float x;
//Ввод x
    cout <<"Введите x ";
    cin >> x;
//Расчет значения
    y = (pow(x,5) + pow(x,3) + 2)/(pow(x,2) + 10);
//Вывод результата
    cout <<"Вывод";
    cout << y;
}
