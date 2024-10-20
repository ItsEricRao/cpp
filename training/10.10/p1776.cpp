#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e4 + 20;
long long n, W, sum;
long long v[MAXN], w[MAXN], m[MAXN], f[MAXN];

void binary_grouping(long long a, long long b, long long c) {
    int cnt = 1;
    while (a > cnt) {
        a -= cnt;
        sum++;
        w[sum] = b * cnt;
        v[sum] = c * cnt;
        cnt *= 2;
    }
    sum++;
    w[sum] = b * a;
    v[sum] = c * a;
    return;
}

void solve() {
    for (int i = 1; i <= sum; i++) {
        for (int j = W; j >= w[i]; j--) {
            f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> W;
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        binary_grouping(c, b, a);
    }
    solve();
    cout << f[W];
    return 0;
}