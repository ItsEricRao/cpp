#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e5;
ll l, n, k, arr[MAXN];

bool check(ll mid) {
    ll tmp = 0, crnt = 0;
    for (ll i = 0; i < n; i++) {
        tmp += ((arr[i] - crnt - 1) / mid);
        crnt = arr[i];
    }
    if (tmp > k) return true;
    return false;
}

int binary(ll left, ll right) {
    ll mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (check(mid)) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> l >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << binary(1,l) << endl;
    return 0;
}