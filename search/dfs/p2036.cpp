#include <bits/stdc++.h>
using namespace std;
int n, fs, fb, ans = 10e8;
int sa[10 + 2];
int ba[10 + 2];

void dfs(int s, int b, int i) {
    if (s != 1 && b != 0) {
        ans = min(abs(s-b),ans);
    }
    if (i > n) return;
    dfs(s*sa[i],b+ba[i],i+1);
    dfs(s,b,i+1);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> sa[i] >> ba[i];
    }
    dfs(1,0,1);
    cout << ans << endl;
    return 0;
}