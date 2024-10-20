#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2010;
const int INF = 0x7f7f7f7f;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
int n, m, a[MAXN][MAXN];
int l, r, mid;
bool vis[MAXN][MAXN], flag;

void init() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            r = max(r, a[i][j]);
        }
    }
    l = 0;
}

void check(int x, int y, int ans) {
    if (x == n) flag = true;
    for (int i = 0; i < 4; i++) {
        int mx = x + dx[i]; int my = y + dy[i];
        if (mx <= 0 || my <= 0 || mx > n || my > m || a[mx][my] > ans || vis[mx][my]) continue;
        vis[mx][my] = true;
        check(mx, my, ans);
        if (flag) return;
    }
}

void binary() {
    while (l <= r) {
        mid = (l + r) / 2;
        memset(vis, 0, sizeof(vis));
        flag = false;
        check(1, 1, mid);
        if (flag) r = mid - 1;
        else l = mid + 1;
    }
}

int main() {
    init();
    binary();
    cout << l << endl;
    return 0;
}