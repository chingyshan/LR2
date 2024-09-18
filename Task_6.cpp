#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double A,x,y,B,T,K,C,D,F;
    unsigned int z;
    cout << "Введите значение x: "<<"\n";
    cin >> x;
    cout << "Введите значение y: "<<"\n";
    cin >> y;
    cout << "Введите значение z: "<<"\n";
    cin >> z;
    cout << "Введите значение D: "<<"\n";
    cin >> D;
    cout << "Введите значение K: "<<"\n";
    cin >> K;
    cout << "Введите значение C: "<<"\n";
    cin >> C;
    A=x-y;
    B=sqrt(z);
    F=A*A/(K-(C*D));
    T=cos(x)+F-B;


    cout << "Введите значение Tравно: "<<T<<"\n";




    return 0;
}