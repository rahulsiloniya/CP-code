#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    map<char, int> mins;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        mins[ch] = int(ch) - 'A' + 1;
    }

    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        string log;
        cin >> log;
        map<char, int> count;
        for (char ch : log) count[ch]++;
        int answer = 0;
        for (auto i : count) {
            // cout << "i.frist " << i.first << " i.second " << i.second << " mins " << mins[i.first] << endl;
            if (i.second >= mins[i.first]) answer++;
        }
        cout << answer << endl;
    }
}