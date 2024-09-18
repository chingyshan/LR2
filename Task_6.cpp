#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x,D,B,p,n,C,Q,K,F;
    cout << "Введите значение x: "<<"\n";
    cin >> x;
    cout << "Введите значение p: "<<"\n";
    cin >> p;
    cout << "Введите значение n: "<<"\n";
    cin >> n;
    cout << "Введите значение D: "<<"\n";
    cin >> D;
    cout << "Введите значение K: "<<"\n";
    cin >> K;
    B=cos(x);
    C=p-n;
    F=B*B/(K*D);
    Q=F+(B*C*C*C);
    cout << "Введите значение Q равно: "<<Q<<"\n";




    return 0;
}
