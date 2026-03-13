#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a,n;
	cout<<"请输入数字a和项数n"; 
	cin>>a>>n;
	long long sn=0,temp=0;
	for(int i=1;i<=n;i++)
	{
		temp=temp*10+a;
		sn+=temp;
	}
	cout<<"Sn="<<sn<<endl;
	return 0;
}
