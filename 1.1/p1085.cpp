#include <bits/stdc++.h>
using namespace std;
int main(){
    int unhppyns = 0, sch, ttr, ram = 0, ans = 0;
    for (size_t i = 1; i <= 7; i++)
    {
        cin >> sch >> ttr;
        if ((sch + ttr) > 8 && (sch + ttr) > ram)
        {
            ram = sch + ttr;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}