#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<long long> st;
    long long num =0;
    for (char c:s){
        if (c=='.'){
            st.push(num);
            num=0;
        }else if (c=='@'){
            break;
        }else if (c=='+'||c=='-'||c=='*'||c=='/'){
            long long b=st.top();st.pop();
            long long a=st.top();st.pop();
            long long res;
            switch(c){
                case'+':res=a+b;break;
                case'-':res=a-b;break;
                case'*':res=a*b;break;
                case'/':res=(a/b)+((a%b!=0&&((a<0)^(b<0)))?1:0);
                break;
            }
            st.push(res);
        }else{
            num=num*10+(c-'0');
        }
    }
    cout<<st.top()<<endl;
    return 0;
}