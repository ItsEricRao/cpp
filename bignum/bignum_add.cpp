#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200 + 10;
void change(string s, int a[]) {
    int len = s.size();
    for(int i = 0; i < len; i++) {
        a[i] = s[len - i - 1] - '0';
    }
}
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
int main() {
    int a1[MAXN] = {0}, a2[MAXN] = {0}, c[MAXN] = {0};
    string sa1, sa2;
    cin >> sa1;
    cin >> sa2;
    change(sa1, a1);
    change(sa2, a2);
    big_add(a1, a2, c);
    big_out(c);

    return 0;
}