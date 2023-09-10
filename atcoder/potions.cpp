#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, h, x;
	cin >> n >> h >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (h + arr[i] >= x) {
			cout << i + 1 << endl;
			break;
		}
	}
}
