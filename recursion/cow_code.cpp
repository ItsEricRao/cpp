#include <bits/stdc++.h>
using namespace std;
string s;
long long n;

void dfs(long long len, long long n) {
    if (len == s.length()) {
        cout << s[n-1];
        return;
    }
    len /= 2;
    if (len >= n) dfs(len,n);
    else {
        if (n==len+1) dfs(len,len);
        else dfs(len, n-1-len);
    }
    return;
}

void solve() {
    cin >> s >> n;
    long long len = s.length();
    while (len < n) {
        len *= 2;
    }
    dfs(len, n);
    return;    
}

int main() {
    cin >> s >> n;
    int t =1;
    while(t--) {
        solve();
    }
    return 0;
}