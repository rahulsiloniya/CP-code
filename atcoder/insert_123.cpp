#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  int answer = 0;
  int i = n - 1;
  while (i >= 0) {
    if (arr[i] == 1) {
      int k = i;
      int num = 1;
      while (k < n) {
        if (arr[k] == 0) {
          answer++;
        }
        else if (arr[k] == num) {
          answer++;
          num++;
          arr[k] == 0;
        }
        else break;
        k++;
      }
    }
    i--;
  }
  cout << answer << endl;
}