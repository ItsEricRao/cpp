#include <bits/stdc++.h>
using namespace std;
int n, k;
int vis[100];
int ans[100];

void dfs(int step) {
    if (step == k) {
        for (int i = 1; i <= k; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            ans[step + 1] = i;
            vis[i] = 1;
            dfs(step + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    dfs(0);
    return 0;
}