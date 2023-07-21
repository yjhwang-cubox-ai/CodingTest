#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<string> stk;
    stk.push("화");
    stk.push("이");
    stk.push("팅");

    while(stk.size()){
        cout << stk.top() << "\n";
        stk.pop();
    }
}