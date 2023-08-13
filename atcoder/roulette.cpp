#include <algorithm>
#include <atomic>
#include <cstdint>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<set<int>> bets(n);
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    int temp;
    for (int j = 0; j < c; j++) {
      cin >> temp;
      bets[i].insert(temp);
    }
  }
  // for (auto i : bets) {
  //   for (auto j : i) cout << j << " ";
  //   cout << endl;
  // }
  int x;
  cin >> x;
  int minbets = INT32_MAX;
  map<int, int> wins;
  vector<int> answer;
  for (int i = 0; i < n; i++) {
    if (bets[i].find(x) != bets[i].end()) {
      // minbets = min(minbets, bets[i].size());
      if (minbets > bets[i].size()) minbets = bets[i].size();
      answer.push_back(i);
    }
  }
  vector<int> result;
  for (int i : answer) {
    if (bets[i].size() == minbets) result.push_back(i);
  }
  // cout << endl;
  cout << result.size() << endl;
  for (int i : result) cout << i + 1 << " "; cout << endl;
}
