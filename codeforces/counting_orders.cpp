#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  int test;
  cin >> test;
  while (test--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> brr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    // sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    long long answer = 0;
    int temp = 0;
    for (int i = 0; i < n; i++) {
      int j = 0;
      while (j < n && brr[j] < arr[i]) {
        temp++;
        j++;
      }
      answer += temp - i;
    }
    cout << answer << endl;
  }
}
