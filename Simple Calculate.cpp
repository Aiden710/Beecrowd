#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double code,code1,unit,unit1, price,price1,result=0;
    cin>>code>>unit>>price>>code1>>unit1>>price1;
    result=(unit*price)+(unit1*price1);
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<result<<"\n";

    return 0;
}