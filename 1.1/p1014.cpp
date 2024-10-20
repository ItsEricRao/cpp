#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, lcnt = 0, ecnt = 0;
    cin >> n;
    while (n > ecnt)
    {
        lcnt++;
        ecnt += lcnt;
    }
    if (lcnt % 2 == 1)
    {
        cout << ecnt-n+1 << "/" << lcnt+n-ecnt << endl;
    }
    else
    {
        cout << lcnt+n-ecnt << "/" << ecnt-n+1 << endl;
    }
    return 0;
}