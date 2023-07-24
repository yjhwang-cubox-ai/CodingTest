#include <bits/stdc++.h>
using namespace std;

// unique() 는 sort(), erase(unique()) 와 함께 쓰는 것이 좋다.

void using_map(vector<int> v)
{
    map<int, int> mp;
    // sort(v.begin(), v.end());
    for (int i : v) {
        if (mp[i])
            continue;
        else {
            mp[i] = 1;
        }
    }
    for (auto it : mp) {
        cout << it.first << "   ";
    }
    cout << "\n";
}

void using_unique(vector<int> v)
{
    sort(v.begin(), v.end());
    auto it = v.erase(unique(v.begin(), v.end()), v.end());
    for (int i : v)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    vector<int> s = { 2,2,1,1,2,2,3,3,5,6,7,8,9};
    using_map(s);
    using_unique(s); 

    return 0;
}