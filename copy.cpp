#include <bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int> v {1,2,3};
//     vector<int> ret(3);
//     copy(v.begin(), v.end(), ret.begin());
//     cout <<ret[1] << "\n";
//     ret[1] = 100;
//     cout << ret[1] << "\n";
//     cout << v[1] << "\n";
//     return 0;
// }

int n = 3;
int main() {
    int v[n] = {1,2,3};
    int ret[n];
    copy(v, v+n, ret);
    cout << v[1] << "\n";
    v[1] = 100;
    cout << v[1] << "\n";
    cout << ret[1] << "\n";

    return 0;
}

