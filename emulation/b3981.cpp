#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
    cin >> s;
    cout << ("+(");
    for (size_t i = 0; i < s.length(); i++) {
        if (i > 0) cout << "+";
        int tmp = s[i] - '0';
        cout << "(";
        for (int j = 1; j <= tmp; j++) cout << "+!+[]";
        cout << "+[])";
    }
    cout << ")";
    return 0;
}