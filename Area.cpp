#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    double A, B, C, tri, cir, trap, squr, rect, PI=3.14159;
    cin>>A>>B>>C;
    tri=0.5*A*C;
    cir=PI*C*C;
    trap=0.5*(A+B)*C;
    squr=B*B;
    rect=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: " <<tri<<"\n";
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<cir<<"\n";
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trap<<"\n";
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<squr<<"\n";
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<rect<<"\n";
    return 0;
}