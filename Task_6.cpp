#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x,D,b,A,S,F,H;
    cout << "Введите значение x: "<<"\n";
    cin >> x;
    cout << "Введите значение D: "<<"\n";
    cin >> D;
    b=x+D;
    A=D*x/b;
    F=(A*A)+(b*cos(x));
    H=D*D*D+(A+D-b);

    S=F/H;
    cout << "Значение S равно: "<<S<<"\n";



    return 0;
}
