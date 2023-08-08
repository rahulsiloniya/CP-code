#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<int> alice;
  vector<int> bob;

  for (int i = 0; i < n + 1; i++) {
    if (s[i] == 'A') alice.push_back(i);
    else bob.push_back(i);
  }

  // cout << "Alice : ";
  // for (int k : alice) cout << k << " "; cout << endl;
  // cout << "Bob : ";
  // for (int k : bob) cout << k << " "; cout << endl;
  
  int i = 0, j = 0;
  for (int m = 1; m <= n; m++) {
    if (m % 2 == 0) {
      i = m / 2;
      j = m / 2;
    }
    else {
      i = m / 2;
      j = m / 2 + 1;
    }
    // cout << i << " " << j << endl;
    if (i >= alice.size()) cout << "Bob\n";
    else if (j >= bob.size()) cout << "Alice\n";
    else if (alice[i] > bob[j]) cout << "Bob\n";
    else cout << "Alice\n";
  }
}
