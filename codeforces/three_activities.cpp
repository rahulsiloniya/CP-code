#include <bits/stdc++.h>

using namespace std;

vector<int> sortedIndex(vector<int> &arr) {
    vector<pair<int, int>> temp;
    for (int i = 0; i < arr.size(); i++) temp.push_back(make_pair(arr[i], i));

    sort(temp.begin(), temp.end(), greater<>());

    vector<int> res;
    res.push_back(temp[0].second);
    res.push_back(temp[1].second);
    res.push_back(temp[2].second);

    return res;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int duration;
        cin >> duration;
        vector<int> one(duration);
        vector<int> two(duration);
        vector<int> three(duration);

        int answer = 0;
        for (int i = 0; i < duration; i++) cin >> one[i];
        for (int i = 0; i < duration; i++) cin >> two[i];
        for (int i = 0; i < duration; i++) cin >> three[i];

        vector<int> oneMax = sortedIndex(one);
        vector<int> twoMax = sortedIndex(two);
        vector<int> threeMax = sortedIndex(three);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (oneMax[i] != twoMax[j]) {
                    for (int k = 0; k < 3; k++) {
                        if (oneMax[i] != threeMax[k] && twoMax[j] != threeMax[k]) {
                            answer = max(answer, one[oneMax[i]] + two[twoMax[j]] + three[threeMax[k]]);
                        }
                    }
                }
            }
        }
        cout << answer << endl;
    }
}