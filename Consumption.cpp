#include <iostream>
#include<iomanip>
using namespace std;
 main(){
    double x,y,div;
    cin>>x>>y;
    div=x/y;
    cout<<fixed<<setprecision(3)<<div<<" km/l"<<endl;
    return 0;
}