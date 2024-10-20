#include <bits/stdc++.h>
using namespace std;
string str;
const char LFT = '(', RT = ')';
const char e[3] = {'C', 'H', 'O'};
const int emp[3] = {12, 1, 16};
int pos = 0, tot;

int dfs() {
    int sum;
    if (str[pos] == LFT) {
        sum = 0;
        pos++;
        while (str[pos] != RT) {
            sum += dfs();
        }
        pos++;
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (str[pos] == e[i]) {
                sum = emp[i];
            }
        }
        pos++;
    }

    if (str[pos] >= '1' && str[pos] <= '9') {
        sum *= str[pos] - '0';
        pos++;
    }
    return sum;
}

int main() {
    cin >> str;
    str = '(' + str + ')';
    tot = dfs();
    cout << tot << endl;
    return 0;
}