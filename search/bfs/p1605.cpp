#include <bits/stdc++.h>
using namespace std;
int mx[] = {0,0,1,-1};
int my[] = {-1,1,0,0};
int n, m, t;
int sx, sy, fx, fy, ans;
int mp[5 + 2][5 + 2];
int tmp[5 + 2][5 + 2];

void mv(int x, int y) {
    if (x == fx && y == fy) {
        ans++;
        return;
    }
    else {
        for (int i = 0; i < 4; i++) {
            int dx = x + mx[i];
            int dy = y + my[i];
            if (tmp[dx][dy] == 0 && mp[dx][dy] == 1) {
                tmp[x][y] = 1;
                mv(dx, dy);
                tmp[x][y] = 0;
            }
        }
    }
}

int main() {
    cin >> n >> m >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            mp[i][j] = 1;
        }
    }
    cin >> sx >> sy >> fx >> fy;
    for (int i = 0; i < t; i++) {
        int bx, by;
        cin >> bx >> by;
        mp[bx][by] = 0;
    }
    mv(sx, sy);
    cout << ans;
    return 0;
}