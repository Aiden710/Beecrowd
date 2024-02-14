#include <iostream>
#include <iomanip>
using namespace std;
int main(){ 
    string name;
    double fixedNumver, total,consider,sunn;
    cin >>name>>fixedNumver>>total;
    consider=(total*0.15);
    sunn=fixedNumver+consider;
    cout <<fixed<<"\n"<<setprecision(2)<<"\n";
    cout<<"TOTAL = R$ "<<sunn<<endl;
    return 0;
}