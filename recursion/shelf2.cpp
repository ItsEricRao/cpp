#include <bits/stdc++.h>
using namespace std;
int s, b, n, ans = 1000000;

struct cow {
    int h;
} cw[20 + 5];

void solve(int x, int sum) {
    if (sum >= b && sum < ans) {
        ans = sum;
    }
    if (sum >= ans || x >= n) {
        return;
    }
    solve(x+1, sum + cw[x].h);
    solve(x+1, sum);
}

int main() {
    cin >> n >> b;
    for (int i = 0; i < n; i++) { 
        cin >> cw[i].h;
    }
    solve(0,0);
    cout << ans - b << endl;
    return 0;
}