#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, q, l, c[110][110], d[110], a[110], p[110], h[110], pos[2], curr = -1;
ll f[2];

void add() {
    for (int i = 1; i <= n; i++) {
        if (p[i] == -1) continue;
        f[p[i]] += d[i];
    }
}

void bankrupt() {
    if (f[curr] < 0) {
        if (curr == 0) cout << "Renko" << endl;
        else cout << "Merry" << endl;
        exit(0);
    }
}

int main() {
    memset(p, -1, sizeof(p));
    cin >> n >> m >> q >> l;
    f[0] = f[1] = m;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= l; j++) {
            cin >> c[i][j];
        }
    }
    for (int i = 1; i <= n; i++) cin >> d[i];
    pos[0] = pos[1] = 1;
    int cmd, k;
    while (cin >> cmd >> k) {
        switch (cmd) {
        case 1:
            curr++;
            if (curr >= 2) add(), curr = 0;
            for (int i = 0; i < k; i++) {
                pos[curr]++;
                if (pos[curr] > n) pos[curr] -= n;
                if (p[pos[curr]] == curr) f[curr] += a[pos[curr]];
                else if (p[pos[curr]] == (!curr)) f[curr] -= a[pos[curr]], f[!curr] += a[pos[curr]], bankrupt();
            }
            break;
        case 2: {
            if (p[pos[curr]] == (!curr)) continue;
            int cnt = 0;
            while (f[curr] >= c[pos[curr]][h[pos[curr]]] && h[pos[curr]] < l && cnt < k) a[pos[curr]] += c[pos[curr]][h[pos[curr]]], f[curr] -= c[pos[curr]][h[pos[curr]]], p[pos[curr]] = curr, h[pos[curr]]++, cnt++;
        }
        default:
            break;
        }
    }
    add();
    cout << f[0] << ' ' << f[1];
    return 0;
}