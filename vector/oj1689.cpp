#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    reverse(a.begin(), a.end());
    for (auto i:a) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}