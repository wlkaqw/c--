#include <iostream>
using namespace std;

int main() {
    int dis;
    cin >> dis;
    double t1 = dis / 1.2, t2 = 50 + dis / 3.0;
    if (t1 < t2) cout << "步行快" << endl;
    else if (t1 > t2) cout << "骑车快" << endl;
    else cout << "一样快" << endl;
    return 0;
}
