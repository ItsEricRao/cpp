#include <bits/stdc++.h>
using namespace std;
int n, m;
long long arr[1000000 + 20];

int binary(int l, int r, int k) {
    int ans = -1;
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] >= k){
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
        if (arr[l] == k) {
            ans = l;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        cout << binary(1,n,q) << " ";
    }
    return 0;
}