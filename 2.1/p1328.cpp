#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200 + 10;
int n, na, nb, a, b, w_a[MAXN], w_b[MAXN];
int duel[5][5] = {
    {0,0,1,1,0},
    {1,0,0,1,0},
    {0,1,0,0,1},
    {0,0,1,0,1},
    {1,1,0,0,0}
};
int main(){
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
    {
        cin >> w_a[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> w_b[i];
    }
    for (int i = 0; i < n; i++)
    {
        a += duel[w_a[i % na]][w_b[i % nb]];
        b += duel[w_b[i % nb]][w_a[i % na]];
    }
    cout << a << " " << b << endl;
    return 0;
}