#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int origin[3] = {1,2,3};
    int copy[3];

    memcpy(copy, origin, sizeof(origin));

    for (int i = 0; i<3; i++){
        cout << copy[i] << " ";
    }
    cout << "\n";

    copy[1] = 100;
    cout << copy[1] << endl;
    cout << origin[1] << endl;
    
    // vector<int> v{1, 2, 3};
    // vector<int> ret(3);
    // memcpy(&ret, &v, 3 * sizeof(int));
    // cout << ret[1] << "\n";
    // ret[1] = 100;
    // cout << ret[1] << "\n";
    // cout << v[1] << "\n";

    return 0;    
}
