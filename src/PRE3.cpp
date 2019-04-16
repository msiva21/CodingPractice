//
// Created by shivam on 4/3/19.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j||((i+j)==n-1)) {
                sum += a[i][j];
            }

        }
    }
    cout << sum;
    return 0;
}