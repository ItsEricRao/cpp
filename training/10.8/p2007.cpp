#include <bits/stdc++.h>
using namespace std;
char rubik[6][3][3];
char stp[105];
int len;

void solve() {
    for (int i = 0; i < len; i++) {
        switch (stp[i]) {
        case '1':
            char a, b, c;
            a = rubik[0][0][2];
            b = rubik[0][1][2];
            c = rubik[0][2][2];

            rubik[0][0][2] = rubik[5][0][2];
            rubik[0][1][2] = rubik[5][1][2];
            rubik[0][2][2] = rubik[5][2][2];

            rubik[5][0][2] = rubik[1][0][2];
            rubik[5][1][2] = rubik[1][1][2];
            rubik[5][2][2] = rubik[1][2][2];

            rubik[1][0][2] = rubik[4][0][2];
            rubik[1][1][2] = rubik[4][1][2];
            rubik[1][2][2] = rubik[4][2][2];

            rubik[4][0][2] = a;
            rubik[4][1][2] = b;
            rubik[4][2][2] = c;

            a = rubik[3][0][0];
            rubik[3][0][0] = rubik[3][2][0];
            rubik[3][2][0] = rubik[3][2][2];
            rubik[3][2][2] = rubik[3][0][2];
            rubik[3][0][2] = a;

            a = rubik[3][0][1];
            rubik[3][0][1] = rubik[3][1][0];
            rubik[3][1][0] = rubik[3][2][1];
            rubik[3][2][1] = rubik[3][1][2];
            rubik[3][1][2] = a;
            break;

        case '2':
            a = rubik[0][0][2];
            b = rubik[0][1][2];
            c = rubik[0][2][2];

            rubik[0][0][2] = rubik[4][0][2];
            rubik[0][1][2] = rubik[4][1][2];
            rubik[0][2][2] = rubik[4][2][2];

            rubik[4][0][2] = rubik[1][0][2];
            rubik[4][1][2] = rubik[1][1][2];
            rubik[4][2][2] = rubik[1][2][2];

            rubik[1][0][2] = rubik[5][0][2];
            rubik[1][1][2] = rubik[5][1][2];
            rubik[1][2][2] = rubik[5][2][2];

            rubik[5][0][2] = a;
            rubik[5][1][2] = b;
            rubik[5][2][2] = c;

            a = rubik[3][0][0];
            rubik[3][0][0] = rubik[3][0][2];
            rubik[3][0][2] = rubik[3][2][2];
            rubik[3][2][2] = rubik[3][2][0];
            rubik[3][2][0] = a;

            b = rubik[3][0][1];
            rubik[3][0][1] = rubik[3][1][2];
            rubik[3][1][2] = rubik[3][2][1];
            rubik[3][2][1] = rubik[3][1][0];
            rubik[3][1][0] = b;

            break;

        case '3':
            a = rubik[0][0][0];
            b = rubik[0][0][1];
            c = rubik[0][0][2];

            rubik[0][0][0] = rubik[2][0][0];
            rubik[0][0][1] = rubik[2][0][1];
            rubik[0][0][2] = rubik[2][0][2];

            rubik[2][0][0] = rubik[1][0][0];
            rubik[2][0][1] = rubik[1][0][1];
            rubik[2][0][2] = rubik[1][0][2];

            rubik[1][0][0] = rubik[3][0][0];
            rubik[1][0][1] = rubik[3][0][1];
            rubik[1][0][2] = rubik[3][0][2];

            rubik[3][0][0] = a;
            rubik[3][0][1] = b;
            rubik[3][0][2] = c;

            a = rubik[4][0][0];
            rubik[4][0][0] = rubik[4][2][0];
            rubik[4][2][0] = rubik[4][2][2];
            rubik[4][2][2] = rubik[4][0][2];
            rubik[4][0][2] = a;

            b = rubik[4][0][1];
            rubik[4][0][1] = rubik[4][1][0];
            rubik[4][1][0] = rubik[4][2][1];
            rubik[4][2][1] = rubik[4][1][2];
            rubik[4][1][2] = b;

            break;

        case '4':
            a = rubik[0][0][0];
            b = rubik[0][0][1];
            c = rubik[0][0][2];

            rubik[0][0][0] = rubik[3][0][0];
            rubik[0][0][1] = rubik[3][0][1];
            rubik[0][0][2] = rubik[3][0][2];

            rubik[3][0][0] = rubik[1][0][0];
            rubik[3][0][1] = rubik[1][0][1];
            rubik[3][0][2] = rubik[1][0][2];

            rubik[1][0][0] = rubik[2][0][0];
            rubik[1][0][1] = rubik[2][0][1];
            rubik[1][0][2] = rubik[2][0][2];

            rubik[2][0][0] = a;
            rubik[2][0][1] = b;
            rubik[2][0][2] = c;

            a = rubik[4][0][0];
            rubik[4][0][0] = rubik[4][0][2];
            rubik[4][0][2] = rubik[4][2][2];
            rubik[4][2][2] = rubik[4][2][0];
            rubik[4][2][0] = a;

            b = rubik[4][0][1];
            rubik[4][0][1] = rubik[4][1][2];
            rubik[4][1][2] = rubik[4][2][1];
            rubik[4][2][1] = rubik[4][1][0];
            rubik[4][1][0] = b;

            break;
        default:
            break;
        }
    }
}

int main() {
    cin >> stp;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                char s;
                cin >> s;
                rubik[i][j][k] = s;
            }
        }
    }
    len = strlen(stp);
    solve();
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << rubik[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}