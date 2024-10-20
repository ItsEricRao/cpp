#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    stringstream ss;
    cin >> n;
    ss << n;
    while (n != 1)
    {
        ss << n/2;
        n /= 2;
    }
    cout << ss.str().size() << endl;
    return 0;    
}