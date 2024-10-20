#include <bits/stdc++.h>
using namespace std;
int f, r, c, shp, wlf, sf, wf;
char mp[250 + 10][250 + 10];
int mx[] = {0,0,1,-1};
int my[] = {1,-1,0,0};

void dfs(int x, int y) {
    if (mp[x][y] == 'R') {
        f = 0;
        return;
    }
    if (mp[x][y] == '#' || mp[x][y] == 'B') return;
    if (mp[x][y] == 'o') shp++;
    if (mp[x][y] == 'v') wlf++;
    mp[x][y] = 'B';
    for (int i = 0; i < 4; i++) {
        int dx = x + mx[i];
        int dy = y + my[i];
        dfs(dx,dy);
    }
}

void fill() {
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (mp[i][j] != 'B') {
                wlf = 0, shp = 0, f = 1;
                dfs(i, j);
                if (f) {
                    if (wlf >= shp) wf += wlf;
                    else sf += shp;
                }
            }
        }
    }
}

int main() {
    memset(mp, 'R', sizeof(mp));
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> mp[i][j];
        }
    }
    fill();
    cout << sf << ' ' << wf << endl;
    return 0;
}