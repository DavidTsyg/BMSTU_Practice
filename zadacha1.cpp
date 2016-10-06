#include <iostream>
#include <cmath>
using namespace std;
//Программа находит значение функции y=(x^5 + x^3 + 2)/(x^2 + 10) в выбранной точке x и выводит это значение
int main() {
    float y;
    float x;
//Задание переменных
    cout <<"Введите x ";
    cin >> x;
//Ввод x
    y = (pow(x,5) + pow(x,3) + 2)/(pow(x,2) + 10);
//Расчет значения
    cout <<"Вывод";
    cout << y;
//Вывод результата
}
