#include <bits/stdc++.h>
using namespace std;
int ln[100], col[100],ld[100],lu[100];
int tot, n;

void out() {
    if (tot <= 2) {
        for (int i = 1; i <= n; i++) {
            cout << ln[i] << " ";
        }
        cout << endl;
    }
    tot++;
}

void search(int i) {
    if (i > n) {
        out();
        return;
    }
    else {
        for (int j = 1; j <= n; j++) {
            if (!col[j] && !ld[i+j] && !lu[i-j+n]) {
                ln[i] = j;
                col[j] = 1;
                ld[i+j] = 1;
                lu[i-j+n] = 1;
                search(i+1);
                col[j] = 0;
                ld[i+j] = 0;
                lu[i-j+n] = 0;
            }
        }
    }
}

int main() {
    cin >> n;
    search(1);
    cout << tot;
    return 0;
}