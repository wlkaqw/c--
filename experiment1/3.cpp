#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b = n/100, s = (n/10)%10, g = n%10;
    cout << b << "+" << s << "+" << g << "=" << b+s+g << endl;
    return 0;
}