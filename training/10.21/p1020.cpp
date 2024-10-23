#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
vector<int> hi;

int lds(vector<int> hi) {
    vector<int> tails;
    for (int i : hi) {
        auto it = upper_bound(tails.begin(), tails.end(), i, greater<int>());
        if (it == tails.end()) tails.push_back(i);
        else *it = i;
    }
    return tails.size();
}

int lis(vector<int> hi) {
    vector<int> tails;
    for (int i : hi) {
        auto it = upper_bound(tails.begin(), tails.end(), i, less<int>());
        if (it == tails.end()) tails.push_back(i);
        else *it = i;
    }
    return tails.size();
}

int main() {
    int num, cnt = 0;
    while (cin >> num) {
        hi.push_back(num);
    }
    cout << lds(hi) << endl;
    cout << lis(hi) << endl;
    return 0;
}