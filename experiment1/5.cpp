#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h,r;
    const double pi=3.1415926535897932384626;
    cin>>h>>r;
    double vol=pi*r*r*h;
    int num=20000/vol;
    if (fmod(20000,vol)>1e-9) num++;
    cout<<num<<endl;
    return 0;
}