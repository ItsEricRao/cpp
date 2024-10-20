#include <bits/stdc++.h>
using namespace std;
const long long MAX = 1e9 + 10;
long long k, n, e, d;

int main() {
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n >> e >> d;
        long long delta = (n-e*d+2)*(n-e*d+2)-4*n;
        if (delta < 0) {
            cout << "NO";
            continue;
        }
        long long p = ((n-e*d+2)-sqrt(delta))/2;
        long long q = ((n-e*d+2)+sqrt(delta))/2;
        if (p > 0 && q > 0 && p * q == n && e * d == (p - 1) * (q - 1) + 1) {
            cout << p << q << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}