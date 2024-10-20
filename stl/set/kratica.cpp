#include <bits/stdc++.h>
using namespace std;
string w[10] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
set<string> s;
set<string>::iterator it;

int main() {
    char str[100 + 10];
    for (int i = 0; i < 10; i++) {
        s.insert(w[i]);
    }
    for (it = s.begin(); it != s.end(); it++) {
        cin >> str;
        if (it != s.begin() && s.find(str) != s.end()) {
            it++;
            continue;
        }
        cout << (char) toupper(str[0]);
        memset(str, 0, sizeof(str));
    }
    return 0;
}