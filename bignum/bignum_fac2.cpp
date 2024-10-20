#include <bits/stdc++.h>
using namespace std;
const int MAXN = 12000 + 10;
int t[MAXN];
void big_out(int a[]) {
    int pos = MAXN - 1;
    while (pos >= 0 && !a[pos]) {
        pos--;
    }
    if (a[pos] == 0) cout << 0 << endl;
    else {
        cout << a[pos];
        for (int i = pos - 1; i >= 0; i--) {
            cout << setfill('0') << setw(4) << a[i];
        }
        cout << endl;    
    }
}
void big_fac(int x, int a[]) {
    int carry = 0;
    for (int i = 0; i < MAXN; i++) {
        a[i] = a[i] * x + carry;
        carry = a[i] / 10000;
        a[i] %= 10000;
    }
}
int main() {
    int n;
    cin >> n;
    t[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        big_fac(i, t);
    }
    big_out(t);

    return 0;
}