#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    float L21, L31, L41, L51, min;
    cout << "Введите координаты 5 точек\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
    L21 = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    L31 = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
    L41 = sqrt(pow(x4-x1,2) + pow(y4-y1,2));
    L51 = sqrt(pow(x5-x1,2) + pow(y5-y1,2));
    if ((L21 <= L31) and (L21 <= L41) and (L21 <= L51)) min = L21;
    if ((L31 <= L21) and (L31 <= L41) and (L31 <= L51)) min = L31;
    if ((L41 <= L31) and (L41 <= L21) and (L41 <= L51)) min = L41;
    if ((L51 <= L31) and (L51 <= L41) and (L51 <= L21)) min = L51;
    if (L21 == min) cout << "На минимальном расстоянии находится точка " << x2 << " " << y2 << endl;
    if (L31 == min) cout << "На минимальном расстоянии находится точка " << x3 << " " << y3 << endl;
    if (L41 == min) cout << "На минимальном расстоянии находится точка " << x4 << " " << y4 << endl;
    if (L51 == min) cout << "На минимальном расстоянии находится точка " << x5 << " " << y5 << endl;
    _getсh();
    return 0;
}
