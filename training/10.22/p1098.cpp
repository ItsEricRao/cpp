#include <bits/stdc++.h>
using namespace std;
int p1, p2, p3;
string s;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> p1 >> p2 >> p3 >> s;
    int len = s.length();
    for (int i = 1; i < len - 1; i++) {
        if (s[i] == '-' && ((islower(s[i-1]) && islower(s[i+1]) && s[i-1] < s[i+1]) || (isdigit(s[i-1]) && isdigit(s[i+1]) && s[i-1] < s[i+1]))) {
            switch (p1) {
            case 1: {
                s.erase(i, 1);
                string tmp = "";
                for (int j = s[i-1] + 1; j <= s[i] - 1; j++) {
                    char ch = j;
                    for (int k = 1; k <= p2; k++) tmp.push_back(ch);
                }
                if (p3 == 2) reverse(tmp.begin(), tmp.end());
                s.insert(i, tmp);
                break;
            }

            case 2: {
                s.erase(i, 1);
                string tmp = "";
                for (int j = s[i-1] + 1; j <= s[i] - 1; j++) {
                    char ch = j;
                    ch = toupper(ch);
                    for (int k = 1; k <= p2; k++) tmp.push_back(ch);
                }
                if (p3 == 2) reverse(tmp.begin(), tmp.end());
                s.insert(i, tmp);
                break;
            }

            case 3: {
                s.erase(i, 1);
                string tmp = "";
                for (int j = s[i-1] + 1; j <= s[i] - 1; j++)
                    for (int k = 1; k <= p2; k++) tmp.push_back('*');
                if (p3 == 2) reverse(tmp.begin(), tmp.end());
                s.insert(i, tmp);
                break;
            }
            
            default:
                break;
            }
        }
    }
    cout << s << endl;
    return 0;
}