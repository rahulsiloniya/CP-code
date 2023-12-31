#include <bits/stdc++.h>

using namespace std;

bool compareBySecond(const pair<int, int>& a, pair<int, int>& b) {
  return a.second < b.second;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> alice(n);
        vector<int> bob(n);
        for (int i = 0; i < n; i++) cin >> alice[i];
        for (int i = 0; i < n; i++) cin >> bob[i];
        vector<int> bobSort(n);
        vector<int> aliceSort(n);
        for (int i = 0; i < n; i++) bobSort[i] = aliceSort[i] = i;
        sort(bobSort.begin(), bobSort.end(), 
                [&alice, &bob](int i1, int i2) { 
                    if (bob[i1] == bob[i2]) return alice[i1] > alice[i2];
                    return bob[i1] > bob[i2]; });
        sort(aliceSort.begin(), aliceSort.end(), 
                [&alice, &bob](int i1, int i2) { 
                    if (alice[i1] == alice[i2]) return bob[i1] > bob[i2];
                    return alice[i1] > alice[i2]; });
        
        cout << "Alice : ";
        for (int i : aliceSort) cout << i << " "; cout << endl;
        cout << "Bob : ";
        for (int i : bobSort) cout << i << " "; cout << endl;

        unordered_set<int> used;
        int alicept = 0;
        int bobpt = 0;

        bool turn = true;
        while (used.size() != n) {
            // alice's turn
            if (turn) {
                while (used.count(bobSort[bobpt]) > 0) bobpt++;
                if (bobpt < n) {
                    bob[bobSort[bobpt]] = 0;
                    alice[aliceSort[alicept]]--;
                    used.insert(bobSort[bobpt]);
                    used.insert(aliceSort[alicept]);
                }
                else break;
                turn = false;
            }
            // bob's turn
            else {
                while (used.count(aliceSort[alicept]) > 0) alicept++;
                if (alicept < n) {
                    alice[aliceSort[alicept]] = 0;
                    bob[bobSort[bobpt]]--;
                    used.insert(bobSort[bobpt]);
                    used.insert(aliceSort[alicept]);
                }
                else break;
                turn = true;
            }
        }

        int ascore = 0, bscore = 0;
        for (int i : alice) ascore += i;
        for (int i : bob) bscore += i;

        cout << ascore - bscore << endl;
    }
}