#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e7 + 10;
int n, m, C, sum;
ll W[MAXN], V[MAXN], dp[MAXN];

void binary_grouping(long long a, long long b, long long c) {
    ll cnt = 1;
    while (a > cnt) {
        a -= cnt;
        sum++;
        W[sum] = b * cnt;
        V[sum] = c * cnt;
        cnt *= 2;
    }
    cnt = a;
    sum++;
    W[sum] = b * cnt;
    V[sum] = c * cnt;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m >> C;
    for (int i = 1; i <= n; i++) {
        ll v, w, d;
        cin >> v >> w >> d;
        binary_grouping(d, w, v);
    }
    for (int i = 0; i <= C; i++) dp[i] = 0;
    for (int i = 1; i <= sum; i++) {
        for (int j = C; j >= V[i]; j--) {
            dp[j] = max(dp[j], dp[j - V[i]] + W[i]);
        }
    }
    for (int i = 1; i <= m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        for (int j = C; j >= 0; j--) {
            for (int k = 0; k <= j; k++) {
                dp[j] = max(dp[j], dp[j-k] + (a * k + b) * k + c);
            }
        }
    }
    cout << dp[C] << endl;
    return 0;
}