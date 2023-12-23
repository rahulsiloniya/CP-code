#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++) cout << i << " ";
        for (int i = n; i > k; i--) cout << i << " ";
        cout << endl;
    }
}