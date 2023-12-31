#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        string one, two, three;
        // map<char, int> check;
        int check = 0;
        bool ques = false;
        for (int i = 0; i < 3; i++) {
            cin >> one;
            check = 0;
            ques = false;
            for (char ch : one) {
                if (ch != '?') check += int(ch - 'A');
                else ques = true;
            }

            if (ques && check == 3) cout << 'A' << endl;
            if (check == 2) cout << 'B' << endl;
            if (check == 1) cout << 'C' << endl;
        }
    }
}