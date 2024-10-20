#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, p1, s1, s2, tg, dg;
int camp[100010], sv[100010];

int calc(int val) {
    int tmp = val;
    int ans = 0;
    while (tmp > m) {
        ans += camp[tmp] * (tmp - m);
        tmp--;
    }
    while (tmp < m) {
        ans += camp[tmp] * (m - tmp);
        tmp++;
    }
    return ans;
}

signed solve() {
    int ans = 0x7f7f7f, rst;
    for (int i = 1; i < n; i++) {
        int tmp = abs(dg + s2 * (m - i) - tg);
        if(tmp < ans) {
            ans = tmp;
            rst = i;
        }
    }
    return rst;
}

signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> camp[i];
    }
    cin >> m >> p1 >> s1 >> s2;
    camp[p1] += s1;
    tg = calc(n);
    dg = calc(1);
    cout << solve();
    return 0;
}