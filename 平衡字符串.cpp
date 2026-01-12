#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    // 用两个数组记录每个位置的括号是否匹配，以及匹配的位置
    vector<int> match(n, -1);
    stack<int> st;
    // 第一步：扫描字符串，匹配括号
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(' || s[i] == '[') {
            st.push(i);
        } else {
            if (!st.empty()) {
                int left = st.top();
                if ((s[i] == ')' && s[left] == '(') || 
                    (s[i] == ']' && s[left] == '[')) {
                    match[left] = i;
                    match[i] = left;
                    st.pop();
                }
            }
        }
    }

    // 第二步：构建结果字符串
    string res;
    for (int i = 0; i < n; ++i) {
        if (match[i] != -1) {
            // 已匹配的括号直接加入
            res += s[i];
        } else {
            // 未匹配的括号，添加对应的括号
            if (s[i] == '(' || s[i] == ')') {
                res += "()";
            } else { // '[' 或 ']'
                res += "[]";
            }
        }
    }

    cout << res << endl;
    return 0;
}