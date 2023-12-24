#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> barr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) cin >> barr[i];

        int res = 0;
        int sum = 0;
        int repmax = 0;
        for (int i = 1; i <= min(n, k); i++) {
            sum += arr[i - 1];
            repmax = max(repmax, barr[i - 1]);
            res = max(res, sum + (k - i) * repmax);
        }
        cout << res << endl;
    }
}