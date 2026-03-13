#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int x=0;x<=20;x++)
	{
		for (int y=0;y<=33;y++)
		{
			int z=100-x-y;
			if (z%3==0&&5*x+3*y+z/3==100)
			{
				cout<<"¼¦ÎÌ:"<<x<<"£¬¼¦Ä¸:"<<y<<"£¬¼¦³û:"<<z<<endl;
			}
		}
	}
	return 0;
}
