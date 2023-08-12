#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> order(n);
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    order[--b]++;
  }

  int answer = -1;
  for (int i = 0; i < n; i++) {
    if (order[i] == 0 && answer != -1) {
      answer = -1;
      break;
    }
    if (order[i] == 0) answer = i + 1;
  }
  cout << answer << endl;
}