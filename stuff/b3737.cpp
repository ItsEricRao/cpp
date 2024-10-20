#include <bits/stdc++.h>
using namespace std;
int main(){
    int bgn, end, day;
    bool leap;
    cin >> bgn >> end;
    for (size_t i = bgn; i <= end; i++)
    {
        day = ( ((i - 1900) % 4) * 2 + (i - 1900) - (i - 1900) % 4 ) % 7;
        if (i % 100 != 0)
        {
            leap = false;
        }
        else if (i % 4 == 0)
        {
            leap = true;
        }        
    }
        
}