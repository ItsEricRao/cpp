#include <bits/stdc++.h>
using namespace std;
bool check(char *str, int len)
{
    if (len < 6 || len > 12)
    {
        return false;
    }
    bool caps = false, lwrcs = false, num = false, sym = false;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            caps = true;
        }
        else if ('a' <= str[i] && str[i] <= 'z')
        {
            lwrcs = true;
        }
        else if ('0' <= str[i] && str[i] <= '9')
        {
            num = true;
        }
        else if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$')
        {
            sym = true;
        }
        else
        {
            return false;
        }
    }
    if (!sym)
    {
        return false;
    }
    if (caps + lwrcs + num < 2)
    {
        return false;
    }
    return true;
}
int main()
{
    char str[110];
    char pwd[110];
    int lth = 0;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ',')
        {
            pwd[lth] = str[i];
            lth++;
        }
        else
        {
            pwd[lth] = '\0';
            if (check(pwd, lth))
            {
                cout << pwd << endl;
            }
            lth = 0;
        }
    }
    if (lth > 0)
    {
        pwd[lth] = '\0';
        if (check(pwd, lth))
        {
            cout << pwd << endl;
        }
    }
    return 0;
}