#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  vector<int> color(n);
  vector<vector<int>> mapping(m + 1);

  // saved indices to each color position
  for (int i = 0; i < n; i++) {
    cin >> color[i];
    mapping[color[i]].push_back(i);
  }

  // bringing last element to the beginning for each color
  for (int j = 0; j < mapping.size(); j++) {
    int i = (int)mapping[j].size() - 1;
    while (i > 0) {
      swap(mapping[j][i], mapping[j][i - 1]);
      i--;
    }
  }

  // creating output string
  string out = "";
  vector<int> current(m + 1, 0);
  for (int i = 0; i < n; i++) {
    // cout << s[mapping[color[i]][current[color[i]]]] << endl;
    out += s[mapping[color[i]][current[color[i]]]];
    current[color[i]]++;
  }
  cout << out << endl;
}