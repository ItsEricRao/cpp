#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long h[1000000 + 20];

bool check(long long k) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (h[i] > k) {
            sum += h[i] - k;
        }
        if (sum >= m) {
            return true;
        }
    }
    return false;
}

int binary(long long l, long long r) {
    long long mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (check(mid)) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    cout << binary(0,0x7f7f7f7f);
    return 0;
}