#include <bits/stdc++.h>
using namespace std;
int n, m, sx, sy;
int xx[] = {1,1,2,2,-1,-1,-2,-2};
int yy[] = {2,-2,1,-1,2,-2,1,-1};
int mp[410][410];
struct Node {
    int x,y,s;
};
int main() {
    cin >> n >> m >> sx >> sy;
    memset(mp, -1, sizeof(mp));
    queue <Node> q;
    q.push((Node){sx,sy,0});
    mp[sx][sy] = 0;
    while (!q.empty()) {
        for (int i = 0; i < 8; i++) {
            int dx = q.front().x + xx[i];
            int dy = q.front().y + yy[i];
            if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && mp[dx][dy] == -1) {
                q.push((Node){dx,dy,q.front().s+1});
                mp[dx][dy] = q.front().s+1;
            }
        }
        q.pop();
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << left << setw(5) << mp[i][j];
        }
        cout << endl;
    }
    return 0;
}