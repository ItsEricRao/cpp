#include <bits/stdc++.h>
using namespace std;
int main(){
    size_t n,x,ram,cache,cnt = 0;
    cin >> n >> x;
    for (size_t i = 1; i <= n; i++)
    {
        ram = i;
        while (ram != 0)
        {
            cache = ram % 10;
            ram /= 10;
            if (cache == x)
            {
                cnt++;
            }
            
        }
        
    }
    cout << cnt << endl;
    return 0;
}