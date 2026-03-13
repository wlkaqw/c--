#include <iostream>
using namespace std;

int main()
{
    int n,temp,d=0,num[5]={0};
    cin>>n;
    temp=n;
    while (temp)
    {
        num[d++]=temp%10;temp/=10;
    }
    cout<<d<<"位数"<<endl;
    for (int i=d-1;i>=0;i--) cout<<num[i]<<" ";
    cout<<endl;
    for (int i=0;i<d;i++) cout<<num[i];
    cout<<endl;
    return 0;
}