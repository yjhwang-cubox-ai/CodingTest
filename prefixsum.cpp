#include <iostream>
using namespace std;
typedef long long ll;

int a[100004], b, c, psum[100004], n, m;

int main(){
    // cin >> n >> m;
    int n = 3;
    int m = 10;

    for (int i = 1; i<=n; i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
    }
    cout << "\n";
    cout << a[1] << a[2] << a[3] <<endl;

    for (int i =0; i < m; i++){
        cin >> b >>  c;
        cout << "b: " << b << "c: " << c << "\n";
        cout << psum[c] - psum[b - 1] << "\n";
    }
}