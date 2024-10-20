#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int ki[200 + 10];
int ans[200 + 10];

void dfs(int flr, int stp) {
    ans[flr] = stp;
    if (flr + ki[flr] <= n && stp + 1 < ans[flr + ki[flr]]) {
        dfs(flr + ki[flr], stp + 1);
    }
    if (flr - ki[flr] > 0 && stp + 1 < ans[flr - ki[flr]]) {
        dfs(flr - ki[flr], stp + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    memset(ans,0x7f,sizeof(ans));
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> ki[i];
    }
    dfs(a,0);
    if (ans[b] != 0x7f7f7f7f) {
        cout << ans[b];
    }
    else cout << -1;
    return 0;
}