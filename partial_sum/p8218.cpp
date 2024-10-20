#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100000 + 10], s[100000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l-1] << endl;
    }
    return 0;
}