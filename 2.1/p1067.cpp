#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        cin >> a;
        if (a)
        {
            if ( a > 0 && i != n )
            {
                cout << "+";
            }
            if ( a < 0)
            {
                cout << "-";
            }
            if (abs(a) > 1 || a && i == 0)
            {
                cout << abs(a);
            }
            if (a && i > 1)
            {
                cout << "x" << "^" << i;
            }
            if ( a && i == 1)
            {
                cout << "x";
            }
        }
    }
    return 0;
}