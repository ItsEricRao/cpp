#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n=0;
    cin >> k;
    for (double sn = 0; sn <= k; n++, sn += 1.0/n);
    cout << n;
    return 0;
}