#include <bits/stdc++.h>
using namespace std;

typedef int State[9];
const int maxstate = 1e6;

const int dx [] = {-1, 1, 0, 0};
const int dy [] = {0, 0, -1, 1};

State st[maxstate], goal = {1, 2, 3, 8, 0, 4, 7, 6, 5};
int dist[maxstate];
set<int> vis;

void init_lookup_table() {
    vis.clear();
}

int try_to_insert(int s) {
    int i, v = 0;
    for (i = 0; i < 9; i++) v = v * 10 + st[s][i];
    if (vis.count(v)) return 0;
    vis.insert(v);
    return 1;
}

int bfs() {
    init_lookup_table();
    int front=1,rear=2;
    while (front < rear) {
        State & s = st[front];
        if(!memcmp(goal, s, sizeof(s))) return front;
        int z;
        for(z=0; z<9; z++) if(!s[z]) break;
        int x = z / 3, y = z % 3;
        int d;
        for (d = 0; d < 4; d++) {
            int newx = x + dx[d];
            int newy = y + dy[d];
            int newz = newx * 3 + newy;
            if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3) {
                State& t = st[rear];
                memcpy(&t, &s, sizeof(s));
                t[newz] = s[z];
                t[z] = s[newz];
                dist[rear] = dist[front]+1;
                if (try_to_insert(rear)) rear++;
            }
        }
        front++;
    }
    return 0;
}
int main(){
    for(int i = 0; i < 9; i++) {
        char ch;
        cin >> ch;
        st[1][i] = ch - '0';
    }
    int ans = bfs();
    if (ans > 0) cout << dist[ans] << endl;
    else cout << -1 << endl;
    return 0;
}