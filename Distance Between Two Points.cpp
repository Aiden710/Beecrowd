#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x1, x2, y1, y2, d, d1, dis;
    cin>>x1>>y1>>x2>>y2;
    d=(x2-x1)*(x2-x1);
    d1=(y2-y1)*(y2-y1);
    dis=d+d1;
    double disa=sqrt(dis);
    cout<<fixed<<setprecision(4)<<disa<<endl;
    return 0;
}
