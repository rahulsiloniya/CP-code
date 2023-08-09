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
  int prev = n;
  while (i >= 0) {
    if (arr[i] == 1) {
      int k = i;
      int num = 1;
      while (k < prev) {      // make an optimization to only go till previous
                              // one and add the result
        
        cout << arr[k] << " ";
        if (arr[k] == 0) {
          answer++;
        }
        else if (arr[k] == num) {
          answer++;
          num++;
          arr[k] = 0;
        }
        else break;
        k++;
      }
      cout << endl;
    }
    i--;
  }
  cout << answer << endl;
}