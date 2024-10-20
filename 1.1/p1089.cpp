#include <bits/stdc++.h>
using namespace std;
int bal, est, bnk, mrk;
bool bnkrpt = false;
int main(){
    for (size_t i = 1; i <= 12; i++)
    {
        bal += 300;
        cin >> est;
        bal -= est;
        if (bal < 0)
        {
            bnkrpt = true;
            mrk=i;
            break;
        }
        bnk += bal / 100;
        bal %= 100;       
    }
    if (bnkrpt == false)
    {
        bal += bnk * 120;
        cout << bal;
    }
    else
    {
        cout << -mrk;
    }
    return 0;  
}