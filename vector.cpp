#include <bits/stdc++.h>
using namespace std;

const int mxy = 3;
const int mxx = 4;

int a[mxy][mxx];
int main()
{
    vector<int> v = {1,2,3};
    v.pop_back();
    for (auto a : v) cout << a << " ";
    cout << "\n";

    vector<pair<int, int>> q={{1,2},{3,4}};
    for (auto a:q) cout << a.first << " ";
    cout << "\n";

    vector<int> v2(10,100);
    for (auto a : v2) cout << a << " ";
    cout << "\n";

    for(int i=0; i<mxy; i++){
        for(int j=0; j<mxx; j++){
            a[i][j] = (i+j);
        }
    }

    for(int i=0; i<mxy; i++){
        for(int j=0; j<mxx; j++){
            cout << a[i][j] << "    ";
        }
        cout << "\n";
    }

    return 0;
}