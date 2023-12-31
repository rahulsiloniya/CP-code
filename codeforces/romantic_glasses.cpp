#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        vector<int> odds;
        vector<int> evens;
        odds.push_back(0);
        evens.push_back(0);
        for (int i = 0; i < n; i++) {
            if (i & 1) odds.push_back(arr[i]);
            else evens.push_back(arr[i]);
        }

        for (int i = 0; i < odds.size(); i++) {
            if (i) odds[i] += odds[i - 1];
        }
        odds.push_back(0);

        for (int i = 0; i < evens.size(); i++) {
            if (i) evens[i] += evens[i - 1];
        }
        // cout << "odds : ";
        // for (int i : odds) cout << i << " "; cout << endl;
        
        // cout << "evens : ";
        // for (int i : evens) cout << i << " "; cout << endl;

        bool answer = false;
        for (int i = 1; i < evens.size(); i++) {
            if (answer) break;
            for (int j = 0; j < i; j++) {
                if (answer) break;
                if (evens[i] - evens[j] == odds[i - 1] - odds[j] ||
                    evens[i] - evens[j] == odds[i] - odds[j]) answer = true;
                if (j > 0) {
                    if (evens[i] - evens[j] == odds[i - 1] - odds[j] ||
                        evens[i] - evens[j] == odds[i] - odds[j] ||
                        evens[i] - evens[j] == odds[i - 1] - odds[j - 1] ||
                        evens[i] - evens[j] == odds[i] - odds[j - 1]) answer = true;
                }
            }
        }

        if (answer) cout << "YES\n";
        else cout << "NO\n";
    }
}