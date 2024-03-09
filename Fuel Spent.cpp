#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,d=60,dis,c,speed,time;
    cin>>a>>b;
    c=a*d;
    dis=b/d;
    speed=dis*c;
    time=speed/12;
    cout<<fixed<<setprecision(3)<<time<< '\n';
    return 0;
}
