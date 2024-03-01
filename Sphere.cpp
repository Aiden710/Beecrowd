#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double r, PI=3.14159, result =0;
    cin>>r;
    result=(4/3.0)*PI*r*r*r;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<result<<"\n";
    return 0;
}