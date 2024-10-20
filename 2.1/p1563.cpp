#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100100;
struct toy
{
    int facing;
    string name;
}stat[MAXN];

struct command
{
    int lr;
    int cnt;
}cmd[MAXN];

int main(){
    int n,m, ram = 1;
    cin >> n >> m;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> stat[i].facing >> stat[i].name;
    }
    for (size_t i = 1; i <= m; i++)
    {

        cin >> cmd[i].lr >> cmd[i].cnt;
    }
    for (size_t i = 1; i <= m; i++)
    {
        if (stat[ram].facing == cmd[i].lr)
        {
            ram -= cmd[i].cnt;
            if (ram <= 0)
            {
                ram += n;
            }
        }
        else
        {
            ram += cmd[i].cnt;
            if (ram > n)
            {
                ram -= n;
            }
        }
        
    }
    cout << stat[ram].name << endl;
    return 0;
}