#include <iostream>
#include <vector>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, m;
		cin >> n >> m;
		vector<string> mat(n);

		for (int i = 0; i < n; i++) {
			cin >> mat[i];
		}

		int possible = 0;
		string comp = "vika";
		for (int i = 0; i < mat[0].length(); i++) {
			for (int j = 0; j < n; j++) if (mat[j][i] == comp[possible]) {
				possible++;
				break;
			} 
		}

		if (possible == 4) cout << "YES\n";
		else cout << "NO\n";
	}
}
