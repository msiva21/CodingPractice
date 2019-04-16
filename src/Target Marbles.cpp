//
// Created by Shivam on 4/3/19.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a[100000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < n / 2; j++) {
        int sum = a[j] + a[n - (j) - 1];
        cout << sum / 10 << " " << sum % 10 << endl;

    }
    return 0;
}