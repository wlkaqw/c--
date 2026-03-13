#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath> 
using namespace std;

bool isPrime(int num)
{
	if (num<2)return false;
	for (int i=2;i<=sqrt(num);i++)
	{
		if (num%i==0)return false;
	}
	return true;
}

int main()
{
	int X,Y,count=0;
	cout<<"请输入两个整数X和Y:"<<endl;
	cin>>X>>Y;
	if (X>Y)swap(X,Y);
	for (int i=X;i<=Y;i++)
	{
		if (isPrime(i))count++;	
	}
	cout<<X<<"-"<<Y<<"之间共有"<<count<<"个质数"<<endl;
	return 0;	
}
