#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int a[] = { 1, 2, 3 };
//     do {
//         for (int i : a)
//             cout << i << " ";
//         cout << "\n";
//     } while (next_permutation(&a[0], &a[0] + 3));
// }

// next_permutation -> 오름차순으로 해놓고 사용해야한다.

// int main()
// {
//     vector<int> a = {2,1,3,100,200};
//     sort(a.begin(), a.end());
//     do {
//         for(int i = 0; i<2; i++){
//             cout << a[i] << " ";
//         }
//         cout << '\n';
//     }while (next_permutation(a.begin(), a.end()));

//     return 0;
// }

int main(){
    vector<int> a = {2,1,3};
    sort(a.begin(), a.end());
    do {
        for(int i : a){
            cout << i << " ";
        }
        cout << '\n';
    }while(next_permutation(a.begin(), a.end()));

    return 0;
}