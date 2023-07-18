#include <bits/stdc++.h>
using namespace std;

// vector<int> a;
// int b[5];
// int main()
// {
//     for (int i = 5; i >= 1; i--) b[i - 1] = i;
//     for (int i = 5; i >= 1; i--) a.push_back(i);

//     // 오름차순
//     sort(b, b+5);
//     sort(a.begin(), a.end());
//     for (int i : b) cout << i << " ";
//     cout << "\n";
//     for (int i : a) cout << i << " ";
//     cout << "\n";

//     sort(b, b+5, less<int>());
//     sort(a.begin(), a.end(), less<int>());
//     for (int i : b) cout << i << " ";
//     cout << "\n";
//     for (int i : a) cout << i << " ";
//     cout << "\n";

//     //내림차순
//     sort(b, b+5, greater<int>());
//     sort(a.begin(), a.end(), greater<int>());
//     for (int i : b) cout << i << " ";
//     cout << "\n";
//     for (int i : a) cout << i << " ";
//     cout << "\n";

//     return 0;
// }

// vector<pair<int, int>> v;
// int main()
// {
//     for (int i = 10; i >= 1; i--) {
//         v.push_back({ i, 10 - i });
//     }
//     sort(v.begin(), v.end());
//     for (auto it : v)
//         cout << it.first << ":" << it.second << "\n";
//     return 0;
// }

// vector <pair<int, int>> v;

// bool cmp(pair<int, int > a, pair<int, int>b){
//     return a.first > b. first;
// }

// int main(){
//     for (int i = 10; i>=1; i-- ){
//         v.push_back({i, 10-i});
//     }
//     sort(v.begin(), v.end(), cmp);
//     for(auto it : v) cout << it.first << " : " << it.second << "\n";
// }

const int len = 10;
int a[len];
vector<int> v;
vector<pair<int, int>> vp;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

// bool cmp_vector(vector <int> a, vector <int> b){
//     return a > b;
// }

int main()
{
    for (int i = len; i >= 1; i--) {
        a[len - i] = i;
        v.push_back(i);
        vp.push_back({i, len - i});
    }

    for (int i = 0; i < len; i++) {
        cout << a[i] << "   ";
    }
    cout << "\n";
    for (int i = 0; i < len; i++) {
        cout << v[i] << "   ";
    }
    cout << "\n";

    sort(a, a+len);
    sort(v.begin(), v.end());

    for (int i = 0; i < len; i++) {
        cout << a[i] << "   ";
    }
    cout << "\n";
    for (int i = 0; i < len; i++) {
        cout << v[i] << "   ";
    }
    cout << "\n";

    sort(a, a+len, greater<int>());
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < len; i++) {
        cout << a[i] << "   ";
    }
    cout << "\n";
    for (int i = 0; i < len; i++) {
        cout << v[i] << "   ";
    }
    cout << "\n";

    for (int i = 0; i < len; i++) {
        cout << vp[i].first << ":" << vp[i].second << "   ";
    }
    cout << "\n";

    sort(vp.begin(), vp.end(), cmp);

    for (int i = 0; i < len; i++) {
        cout << vp[i].first << ":" << vp[i].second << "   ";
    }
    cout << "\n";

    return 0;
}