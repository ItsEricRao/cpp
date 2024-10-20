#include <bits/stdc++.h>
using namespace std;
string w;
string s[100 + 10];
int main() {
    ios::sync_with_stdio(false);
    int cnt = 0;
    while (cin >> w) {
        s[cnt++] = w;
    }
    sort(s, s + cnt);
    for (int i = 0; i < cnt; i++) {
        if (s[i] != s[i+1]) {
            cout << s[i] << endl;
        }
    }
    return 0;
}