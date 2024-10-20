#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50000 + 10;
long long arr[MAXN];
int n, m, l;

bool check(long long mid) {
    int tmp = 0, crnt = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] - arr[crnt] < mid) tmp++;
        else crnt = i;
    }
    if (tmp > m) return false;
    return true;
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
    cin >> l >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cout << binary(0, l) << endl;

    return 0;
}