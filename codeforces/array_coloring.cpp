#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int odds = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] & 1) odds++;
        }
        if (odds & 1) cout << "NO\n";
        else cout << "YES\n";
    }
}