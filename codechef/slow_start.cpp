#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int x, h;
		cin >> x >> h;
		int moves = 0;

		while (moves < 5 && h > 0) {
			h -= x / 2;
			moves++;
		}
		while (h > 0) {
			h -= x;
			moves++;
		}
		cout << moves << endl;
	}
}
