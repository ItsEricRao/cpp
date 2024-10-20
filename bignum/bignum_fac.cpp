#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200 + 10;
void big_out(int a[]) {
    int pos = MAXN - 1;
    while (pos >= 0 && !a[pos]) {
        pos--;
    }
    if (a[pos] == 0) cout << 0 << endl;
    else {
        for (int i = pos; i >= 0; i--) {
            cout << a[i];
        }
        cout << endl;    
    }
}
void big_add(int a[], int b[], int x[]) {
    int carry = 0;
    for (int i = 0; i < MAXN; i++) {
        x[i] = a[i] + b[i] + carry;
        carry = x[i] / 10;
        x[i] %= 10;
    }
}
void big_fac(int x, int a[]) {
    int carry = 0;
    for (int i = 0; i < MAXN; i++) {
        a[i] = a[i] * x + carry;
        carry = a[i] / 10;
        a[i] %= 10;
    }
}
int main() {
    int s[MAXN] = {0}, t[MAXN] = {0};
    int n;
    cin >> n;
    t[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        big_fac(i, t);
        big_add(t,s,s);
    }
    big_out(s);

    return 0;
}