#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int main()
{
    double x1,y1,r,x2,y2;
    cin>>x1>>x2>>r>>x2>>y2;
    double d2=pow(x2-x1,2)+pow(y2-y1,2),r2=r*r;
    if (fabs(d2=r2)<1e-9||d2<r2) cout<<"该点在圆上"<<endl;
    else cout<<"该点在圆外"<<endl;
    return 0;
}