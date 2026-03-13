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
int reverseNum(int num)//数字反序 
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
	int M,N;
	cout<<"请输入两个整数M，N(1<=M<=N<=100000):"<<endl;
	cin>>M>>N;
	if (M>N)swap(M,N);
	cout<<M<<"-"<<N<<"之间的真素数"<<endl;
	bool hasPrime=false;
	for (int i=M;i<=N;i++)
	{
		int rev=reverseNum(i);
		if (isPrime(i)&&isPrime(rev))
		{
			if (hasPrime)cout<<",";
			cout<<i;
			hasPrime=true;	
		}
	}    
	if (!hasPrime)
	{
		cout<<"No";
	}
	return 0;
}
