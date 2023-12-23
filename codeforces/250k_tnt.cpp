#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int maxi(vector<int>& arr) {
    int res = arr[0];
    for (auto i : arr) if (i > res) res = i;
    return res;
}

int mini(vector<int>& arr) {
    int res = arr[0];
    for (auto i : arr) if (i < res) res = i;
    return res;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int answer = 0;
        for (int i = 1; i <= n; i++) {
            vector<int> temparr;
            int j = 0;
            while (j < n) {
                int temp = 0;
                while ((j + 1) % i != 0 && j < n) {
                    temp += arr[j];
                    j++;
                }
                temparr.push_back(temp);
                temp = 0;
            }
            answer = max(answer, maxi(temparr) - mini(temparr));
        }
        cout << answer << "\n";
    }
}