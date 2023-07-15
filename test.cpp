#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> number;
    int a, b;
    number = {1, 2};

    tie(a, b) = number;

    cout << a << " : " << b << endl; 

    tuple<int, int, int> tup;
    tup = {1,2,3};

    int x1 = get<0>(tup);
    int x2 = get<1>(tup);
    int x3 = get<2>(tup);

    cout << x1 << " : " << x2 << " : " << x3 << endl; 

    return 0;
}