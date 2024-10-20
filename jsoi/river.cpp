#include <bits/stdc++.h>
using namespace std;
const int N = 2500;
int n,m,s[N+5], dp[N+5];
int main(){
    cin >> n >> m;
    s[0] = m;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> s[i];
        s[i] += s[i-1];
    }
    for (size_t i = 1; i <= n; i++)
    {
        dp[i] = s[i];
        for (size_t j = 0; j < i; j++)
        {
            dp[i] = min(dp[i-j] + m + s[j], dp[i]);
        }
        
    }
    cout << dp[n] << endl;
    return 0;
}