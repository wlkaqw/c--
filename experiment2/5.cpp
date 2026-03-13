#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cout<<"请输入天数n(n<500):"<<endl;
	cin>>n;
	int total=0,day=0,num=1;
	while (day<n)
	{
		int take=min(num,n-day);
		total+=num*take;
		day+=take;
		num++;
	}
	cout<<n<<"天共获得"<<total<<"支粉笔"<<endl;
	return 0;
}
