#include <bits/stdc++.h>
using namespace std;
const int MAXN = 30 + 2;
int c_arr[MAXN];
void change(string s, int a[]) {
    int len = s.size();
    for (int i = 0; i < len; i++) {
        a[i] = s[len - i - 1] - '0';
    }
}
void div() {
    for (int i = 0; i < MAXN; i++) {
        
    }
}
int main() {
    string c;
    cin >> c;
    change(c, c_arr);


    return 0;
}