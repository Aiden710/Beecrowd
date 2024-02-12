#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int NUMBER,HOURS;
    float dollar,SALARY;
    cin>>NUMBER>>HOURS>>dollar;
    SALARY=(HOURS*dollar);
    cout<<fixed<<endl;
    cout<<setprecision(2)<<endl;
    cout<<"NUMBER = "<<NUMBER<<endl;
    cout<<"SALARY = U$ "<<SALARY<<endl;
    return 0;
}