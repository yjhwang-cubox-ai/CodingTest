#include <bits/stdc++.h>
using namespace std;

//unique() 는 sort(), erase(unique()) 와 함께 쓰는 것이 좋다.

int main() {
    vector<int> s = {4,3,3,5,1,2,3};
    sort(s.begin(), s.end()+1);
    s.erase(unique(s.begin(), s.end()), s.end());
    for (int i : s) cout << i << " ";
    return 0;
}