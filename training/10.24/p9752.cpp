#include <bits/stdc++.h>
using namespace std;
const int MAXN = 11, mod = 10;
int n, ans, pass[MAXN][MAXN][MAXN][MAXN][MAXN];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        for (int j = 1; j <= 9; j++) {
            pass[(a+j)%mod][b][c][d][e]++;
            pass[a][(b+j)%mod][c][d][e]++;
            pass[a][b][(c+j)%mod][d][e]++;
            pass[a][b][c][(d+j)%mod][e]++;
            pass[a][b][c][d][(e+j)%mod]++;
            pass[(a+j)%mod][(b+j)%mod][c][d][e]++;
            pass[a][(b+j)%mod][(c+j)%mod][d][e]++;
            pass[a][b][(c+j)%mod][(d+j)%mod][e]++;
            pass[a][b][c][(d+j)%mod][(e+j)%mod]++;
        }
    }
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                for (int d = 0; d <= 9; d++) {
                    for (int e = 0; e <= 9; e++) {
                        if (pass[a][b][c][d][e] == n) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}