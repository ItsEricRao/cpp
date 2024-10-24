#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int f[N][20], n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> f[i][0];
    for (int i = 1; i + (1 << i) - 1 <= n; i++) {
        for (int j = 1; j + (1 << i) - 1 <= n; j++) {
            f[j][i] = max(f[j][i-1], f[j+(1<<i-1)][i-1]);
        }
    }
    for (int k, l, r, i=1; i <= m; i++) {
        cin >> l >> r;
        k = log2(r-l+1);
        cout << max(f[l][k], f[r-(1<<k)+1][k]) << endl;
    }
    return 0;
}