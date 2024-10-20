#include <bits/stdc++.h>
using namespace std;
int t, m, T[1010], V[1010], f[1010];

void solve() {
    for (int i = 1; i <= m; i++) {
        for (int j = t; j >= T[i]; j--) {
            f[j] = max(f[j], f[j - T[i]] + V[i]);
                if (f[j - T[i]] + V[i] > f[j]) {
                    f[j] = f[j - T[i]] + V[i];
                }
        }
    }
}

int main() {
    cin >> t >> m;
    for (int i = 1; i <= m; i++) {
        cin >> T[i] >> V[i];
    }
    solve();
    cout << f[t];
    return 0;
}