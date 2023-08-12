#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  int answer = 0;
  stack<int> seq;
  for (int i = n - 1; i >= 0; i--) {
    while (i >= 0 && arr[i] != 1) {
      seq.push(arr[i]);
      i--;
    }
    if (arr[i] == 1) {
      int temp = 1;
      int num = 2;
      while (!seq.empty() && seq.top() == num) {
        cout << seq.top() << " ";
        temp++;
        seq.pop();
        num++;
      }
      cout << endl;
      // if (seq.empty())
      answer += temp;
    }
  }
  cout << answer << '\n';
  // int i = n - 1;
  // int prev = n;
  // while (i >= 0) {
  //   if (arr[i] == 1) {
  //     int k = i;
  //     int num = 1;
  //     while (k < prev) {      
  //      if (arr[k] == 0) {
  //         answer++;
  //       }
  //       else if (arr[k] == num) {
  //         answer++;
  //         num++;
  //         arr[k] = 0;
  //       }
  //       else break;
  //       k++;
  //     }
  //     // cout << endl;
  //   }
  //   i--;
  // }
  // cout << answer << endl;
}