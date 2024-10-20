#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    char array[m][n];
    cin >> n >> m >> k;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; i <= n; i++)
        {
            array[i][j] = '.';
        }
        
    }
    for (int i = 0; i <= k; i++)
    {
        int x, y;
        char color, direction;
        cin >> x >> y >> color >> direction;
        switch (direction)
        {
        case 'R':
            for (int i = x; i <= m; i++)
            {
                array[i][y] = color;
            }
        case 'U':
            for (int i = y; i >= 0; i--)
            {
                array[x][i] = color;
            }
        case 'L':
            for (int i = x; i >= 0; i--)
            {
                array[i][y] = color;
            }
        case 'D':
            for (int i = y; i <= n; i++)
            {
                array[x][i] = color;
            }
        }
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << array[i][j];
        }
        
    }
        
}