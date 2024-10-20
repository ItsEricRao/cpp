#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4 + 10;
const int MAXW = 1e7 + 10;
int t, m, w[MAXN], v[MAXN];
long long f[MAXW];

void solve() {
    for (int i = 1; i <= m; i++) {
        for (int j = w[i]; j <= t; j++) {
            if (f[j - w[i]] + v[i] > f[j]) {
                f[j] = f[j - w[i]] + v[i];
            }
        }
    }
}

int main() {
    cin >> t >> m;
    for (int i = 1; i <= m; i++) {
        cin >> w[i] >> v[i];
    }
    solve();
    cout << f[t];
    return 0;
}