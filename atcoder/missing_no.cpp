#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	bool end = true;
	int ans = -1;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != arr[i + 1] - 1) {
			end = false;
			ans = arr[i] + 1;
			break;
		}
	}
	if (end) {
		ans = arr[n - 1] + 1;
	}
	cout << ans << endl;
}
