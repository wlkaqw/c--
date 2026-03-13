#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double a=hypot(x2-x3,y2=y3),b=hypot(x1-x3,y1-y3), c=hypot(x1-x2,y1-y2);
    if (a+b>c+1e-6 && a+c>b+1e-6 && b+c>a+1e-6)
        {
        double per = a+b+c, p=per/2;
        double area = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed << setprecision(2) << per << endl << area << endl;
        }
    else cout << "Error" << endl;
    return 0;
}