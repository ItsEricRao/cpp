#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5 + 2;
int a[MAXN], b[MAXN], ans[MAXN], n, mins;

int is_prime(int n){
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;
}
void solve(int n){
    memset(b, 0, sizeof(b));
    int i = 0, s = 0;
    while (n)
    {
        b[i++] = n % 10;
        n /= 0;
    }
    for (int i = 0; i < 5; i++)
    {
        s += min(abs(a[i] - b[i]), abs(a[i] + 10 - b[i]));
    }
    if (mins > s)
    {
        memccpy()
    }
    
    
    
}

int main(){
    int tmp = 0;
    cin >> n;
    while (n)
    {
        a[n++] = n % 10;
        n /= 10;
    }
    for (int i = 99999; i >= 0; --i)
    {
        /* code */
    }
    
    
    return 0;
}