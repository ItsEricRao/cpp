#include <bits/stdc++.h>
using namespace std;
int n, m;
char maze[310][310], vis[310][310];
int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};

struct teleporter {
    int ax, ay, bx, by;
} t[30];
struct node {
    int x, y, stp;
};

queue<node> q;

void solve() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char ch;
            cin >> ch;
            maze[i][j] = ch;
            if (ch >= 'A' && ch <= 'Z') {
                if (t[ch].ax == 0) t[ch].ax = i, t[ch].ay = j;
                else t[ch].bx = i, t[ch].by = j;
            }
            else if (ch == '@') {
                q.push(node{i, j, 0});
                maze[i][j] = '#';
            }
        }
    }
    while (!q.empty()) {
        auto k = q.front();
        int x = k.x, y = k.y, s = k.stp;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int mx = x + dx[i], my = y + dy[i];
            char mz = maze[mx][my];
            if (mz == '#') continue;
            if (mx < 1 || mx > n || my < 1 || my > m) continue;
            if (mz == '.') {
                q.push(node{mx, my, s + 1});
                maze[mx][my] = '#';
                continue;
            }
            if (mz == '=') {
                cout << s + 1;
                return;
            }
            if (t[mz].ax == mx && t[mz].ay == my) {
                q.push(node{t[mz].bx, t[mz].by, s + 1});
            }
            else q.push(node{t[mz].ax, t[mz].ay, s + 1});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    solve();
    return 0;
}