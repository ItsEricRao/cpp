#include <bits/stdc++.h>
using namespace std;
int n, m, w[13010], v[13010], f[13010];

void solve() {
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= w[i]; j--) {
            f[j] = max(f[j], f[j - w[i]] + v[i]);
                if (f[j - w[i]] + v[i] > f[j]) {
                    f[j] = f[j - w[i]] + v[i];
                }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    solve();
    cout << f[m];
    return 0;
}