#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath> 
using namespace std;

bool isPrime(int num)//判断质数 
{
	if (num<2)return false;
	for (int i=2;i<=sqrt(num);i++)
	{
		if (num%i==0)return false;
	}
	return true;
}
int reverseNum(int num)
{
	int res=0;
	while (num>0)
	{
		res=res*10+num%10;
		num/=10; 
	}
	return res;
}

int main()
{
	int n;
	cout<<"请输入查找的回文质数的位数n:"<<endl;
	cin>>n;
	if (n<1)
	{
		cout<<"位数不能小于1"<<endl;
		return 0;
	}
	int start=pow(10,n-1);
	int end=pow(10,n)-1;
	bool has=false;
	for (int i=start;i<=end;i++)
	{
		if (i==reverseNum(i)&&isPrime(i))
		{
			cout<<i<<" ";
			has=true;
		}
	}
	if (!has)cout<<"无符合要求的数";
	cout<<endl;
	return 0; 
}
