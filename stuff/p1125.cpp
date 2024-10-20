#include <bits/stdc++.h>
using namespace std;
char str[110];
const int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int stat[26];
int main(){
    int maxn = 0, minn = 110;
    cin >> str;
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        stat[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        maxn = max(maxn, stat[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        if (stat[i] > 0)
        {
            minn = min(minn, stat[i]);
        }
    }
    for (int i = 0; i < 25; i++)
    {
        if (maxn - minn == prime[i])
        {
            cout << "Lucky Word\n" << maxn - minn << endl;
            return 0;
        }
    }
    cout << "No Answer\n0" << endl;    
    return 0;
}