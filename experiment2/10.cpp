#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
	int m,n,count=0;
	cout<<"请输入两个整数m和n(1<m<n<=5000):"<<endl;
	cin>>m>>n;
	if (m>n)swap(m,n);
	cout<<m<<"-"<<n<<"的最大质因子"<<endl;
	for (int i=m;i<=n;i++)
	{
		int maxf=1,temp=i;
		for (int j=2;j<=sqrt(temp);j++)
		{
			while (temp%j==0)
			{
				maxf=max(maxf,j);
				temp/=j;
			}
		}
		if (temp>1)maxf=temp;
		cout<<setw(5)<<right<<maxf;
		count++;
		if (count%5==0)cout<<endl;
	}
	cout<<endl;
	return 0;
}
