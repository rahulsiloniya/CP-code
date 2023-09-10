#include <vector>
#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];

		vector<int> result;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i + 1] >= arr[i]) result.push_back(arr[i]);
			else {
				result.push_back(arr[i]);
				result.push_back(arr[i + 1]);
			}
		}

		// if (arr[n - 1] >= arr[n - 2]) result.push_back(arr[n - 1]);
		// else {
			result.push_back((arr[n - 1]));
		// }
		// cout << "answer : ";
		cout << result.size() << endl;
		for (int i : result) cout << i << " "; cout << endl;
	}
}
