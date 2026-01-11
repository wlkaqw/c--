#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long current_sum = a[0];
    long long max_sum = a[0];

    for (int i = 1; i < n; ++i) {
        current_sum = max(static_cast<long long>(a[i]), current_sum + a[i]);
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum << endl;
    return 0;
}
