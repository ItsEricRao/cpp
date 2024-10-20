#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
int a, b;
long long ans = 1;
int main() {
    cin >> a >> b;
    if (a == 1) {
        cout << 1 << endl;
        return 0;
    }
    while (b && ans <= MAX) {
        ans *= a;
        b--;
    }
    if (ans > MAX) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans;
    return 0;
}