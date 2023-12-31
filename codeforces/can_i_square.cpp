#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        bool answer = false;
        int non[] = {2,3,7,8};
        for (int i = 0; i < 4; i++) if (arr[i] == non[i]) answer = false;

        long long root = sqrt(sum);
        if (root * root == sum) answer = true;
        
        if (answer) cout << "YES\n";
        else cout << "NO\n";
    }
}