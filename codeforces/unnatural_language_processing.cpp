#include <bits/stdc++.h>

using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e');
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string answer = "";
        for (int i = n - 1; i >= 0; i--) {
            if (isVowel(s[i])) {
                answer += s[i];
                answer += s[i - 1];
                answer += '.';
                i--;
            }
            
            else {
                answer += s[i];
                answer += s[i - 1];
                answer += s[i - 2];
                answer += '.';
                i -= 2;
            }
        }
        answer.pop_back();
        reverse(answer.begin(), answer.end());
        cout << answer << endl;
    }
}