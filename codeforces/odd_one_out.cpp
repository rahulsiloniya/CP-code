#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
         int a, b, c;
         cin >> a >> b >> c;
         cout << (a ^ b ^ c) << endl;
    }
}