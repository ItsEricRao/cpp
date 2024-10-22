#include <bits/stdc++.h>
using namespace std;
const int INF = INT32_MAX;
int n, m;
struct Cow {
    int x, y;
    vector<int> adj;
    bool vis;
};

vector<Cow> cows;
vector<int> curr_net;

void dfs(int curr) {
    cows[curr].vis = true;
    curr_net.push_back(curr);
    for (int i : cows[curr].adj) {
        if (!cows[i].vis) dfs(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    cows.resize(n);
    for (Cow &c : cows) {
        cin >> c.x >> c.y;
        c.vis = false;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cows[a - 1].adj.push_back(b - 1);
        cows[b - 1].adj.push_back(a - 1);
    }

    vector<vector<int> > networks;
    for (int i = 0; i < n; i++) {
        if (!cows[i].vis) {
            curr_net.clear();
            dfs(i);
            networks.push_back(curr_net);
        }
    }

    int minC = INF;
    for (vector<int> net : networks) {
        int minx = INF;
        int maxx = 0;
        int miny = INF;
        int maxy = 0;
        
        for (int i : net) {
            minx = min(minx, cows[i].x);
            maxx = max(maxx, cows[i].x);
            miny = min(miny, cows[i].y);
            maxy = max(maxy, cows[i].y);
        }
        minC = min(minC, 2 * (maxx-minx) + 2 * (maxy-miny));
    }
    cout << minC << endl;
    return 0;
}