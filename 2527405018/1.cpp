#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count=0;
	for(int i=32;i<=126;i++)
	{
		cout<<setw(5)<<right<<(char)i;
		count++;
		if (count%5==0)cout<<endl;
	}
	cout<<endl;
	return 0;
}
