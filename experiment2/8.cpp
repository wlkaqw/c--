#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
	int arr[50],index=0,n;
	for (int i=10;i<=31;i++)
	{
		int num=i*i;
		int a=num/100,b=(num/10)%10,c=num%10;
		if (a==b||a==c||b==c)
		{
			arr[index++]=num;	
		}	
	}
	cout<<"请输入n，输出第n个符合条件的3位数:"<<endl;
	cin>>n;
	if (n<=0||n>index)
	{
		cout<<-1<<endl;	
	}
	else
	{
		cout<<"第"<<n<<"个符合条件的数是:"<<arr[n-1]<<endl;	
	}
	return 0;	
} 
