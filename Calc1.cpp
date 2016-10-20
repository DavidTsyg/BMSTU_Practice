#include <iostream>

using namespace std;


double sum(float a, float b){
    return a + b;
}
double sub(float a, float b){
    return a - b;
}
double multiply(float a, float b){
    return a*b;
}
double div(float a, float b){
    return double(a/b);
}
double pow(float a, int b){
    float new_a = 1;
    int i =1;
    for(i = 1; i <= b; i++){
        new_a = new_a * a;
    }
    return new_a;
}
double sqrt(float a) {
    double n = 1;
    int i = 1;
    for(i;i<a;i++)
    {
        if (pow(n,2) == a) break;
        else (n = 0.5*(n + a/n));
    }
    return n;
}

int main() {
    float a = 25;
    float b = 4;
    cout << sqrt(a) << endl;
    cout << pow(a, b) << endl;
    cout << div(a, b) << endl;
    cout << multiply(a, b) << endl;
    cout << sum(a, b) << endl;
    cout << sub(a, b) << endl;
    return 0;
}
