#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  vector<int> res(n, sum / n);
  for (int i = 0; i < sum % n; i++) {
    res[n - 1 - i]++;
  }
  sort(arr.begin(), arr.end());
  ll answer = 0;
  for (int i = 0; i < n; i++) {
    answer += abs(arr[i] - res[i]);
  }
  cout << answer / 2 << endl;
}