//
// Created by shivam on 4/3/19.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int d, s = 0;

    for (int i = n; i > 0; i--) {
        for (int j = n; j > 0; j--) {
            if (i == j) { d += a[i][j]; }
        }
    }
    cout << d;
    return 0;
}
