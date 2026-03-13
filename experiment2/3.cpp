#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N,k;
	cout<<"请输入年薪N万元(10<=N<=50)和年增长率k%(1<=k<=20)"<<endl;
	cin>>N>>k;
	double housePrice=200.0;
	long long savings=0;
	int year=0;
	bool canBuy=false;
	while (year<=20)
	{
		year++;
		savings+=N;
		if (savings>=housePrice)
		{
			cout<<"最早第"<<year<<"年可以买下房子"<<endl;
			canBuy=true;
			break;         
		}
		housePrice=housePrice*(100+k)/100;
	}
	if (!canBuy)cout<<"Impossible"<<endl;
	return 0; 	
}
