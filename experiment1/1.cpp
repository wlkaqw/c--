#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() 
{
	int a,b,c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	double avg = sum / 3.0;
	int max_num = max(a,max(b,c));
	int min_num = min(a,min(b,c));
	cout <<fixed<<setprecision(4);
	cout <<"平均值"<<left<<setw(8)<<avg<<endl;
	cout <<"和"<<right<<setw(6)<<avg<<endl;
	cout <<"最大值"<<right<<setw(6)<<max_num<<endl;
	cout <<"最小值"<<right<<setw(6)<<min_num<<endl;
	return 0;
}
