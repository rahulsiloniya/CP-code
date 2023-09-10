#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main() {
	long long a, b, c;
	cin >> a >> b >> c;

	set<int> muls;
	for (int i = 1; i <= c; i++) {
		muls.insert(a * (i + 1));
	}
	for (int i = 1; i <= c; i++) {
		muls.insert(b * (i + 1));
	}
	// sort(muls.begin(), muls.end());
	// for (int i : muls) cout << i << " "; cout << endl;
	
	auto it = muls.rend();
	while (c--) it++;

	int num = *it;	// muls[c - 1];
	if (num % a == 0 && num % b == 0) {
		int lcm = (a * b) / gcd(max(a,b), min(a,b));
		while (num >= 0) {
			cout << num << " ";
			num -= lcm;
		}
	}
	else if (num % a == 0) {
		while (num >= 0) {
			cout << num << " ";
			num -= a;
		}
	}
	else if (num % b == 0) {
		while (num >= 0) {
			cout << num << " ";
			num -= b;
		}
	}
	cout << "\n";
}
