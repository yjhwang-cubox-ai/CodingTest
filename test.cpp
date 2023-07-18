#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp[10][10];

    fill(&temp[0][0], &temp[9][10], 7);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << temp[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}