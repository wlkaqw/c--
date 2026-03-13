#include <iostream>
using namespace std;

int main() 
{
    int m, d, days[]={0,31,28,31,30,31,30,31,31,30,31,30,31}, tot=0;
    cin >> m >> d;
    for(int i=1; i<m; i++) tot += days[i];
    tot += d-1;
    string week[]={"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};
    cout << week[tot%7] << endl;
    return 0;
}
