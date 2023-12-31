#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n; cin >> n;
        vector<int> arr(n);

        vector<int> presum(n + 1);
        presum[0] = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            presum[i + 1] = presum[i] + arr[i];
        }
        bool answer = false;
        vector<int> odds;
        vector<int> evens;
        // odds.push_back(0);
        // evens.push_back(0);
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

        set<int> presummation;
        int oddpt = 0, evenpt = 0;
        int pointer = 0;
        while (oddpt < odds.size() && evenpt < evens.size()) {
            if (presummation.count(abs(odds[oddpt] - evens[evenpt])) > 0) {
                answer = true;
                break;
            }
            if (pointer) evenpt++;
            else oddpt++;
            pointer++;
            presummation.insert(presum[pointer]);
        }

        if (answer) cout << "YES\n";
        else cout << "NO\n";
    }
}