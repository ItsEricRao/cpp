#include <bits/stdc++.h>
#define MAXN 2100000000
using namespace std;
int main(){
    int n, a, b, x, ans = MAXN;
    cin >> n;
    for (size_t i = 1; i <= 3; i++)
    {
        cin >> a >> b;
        x = ceil(n * 1.0 / a) * b;
        ans=min(x, ans);
    }
    cout << ans;
    
}