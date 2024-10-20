#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;
int a[MAXN], b[MAXN], g[MAXN], k[MAXN], n, x, y, result = -1;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cin >> x >> y;
    for (int i = 0; i < n; i++)
    {
        if (x >= a[i] && y >= b[i] && x <= a[i] + g[i] && y <= b[i] + k[i])
        {
            result = i + 1;
        }
    }
    cout << result << endl;
    return 0;
}