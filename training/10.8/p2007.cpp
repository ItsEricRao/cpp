#include <bits/stdc++.h>
using namespace std;
char rubik[6][3][3];
char stp[105];
int len;

void solve() {
    for (int i = 0; i < len; i++) {
        switch (stp[i]) {
        case '1':
            char a1, b1, c1;
            a1 = rubik[0][0][2];
            b1 = rubik[0][1][2];
            c1 = rubik[0][2][2];

            rubik[0][0][2] = rubik[5][0][2];
            rubik[0][1][2] = rubik[5][1][2];
            rubik[0][2][2] = rubik[5][2][2];

            rubik[5][0][2] = rubik[1][0][2];
            rubik[5][1][2] = rubik[1][1][2];
            rubik[5][2][2] = rubik[1][2][2];

            rubik[1][0][2] = rubik[4][0][2];
            rubik[1][1][2] = rubik[4][1][2];
            rubik[1][2][2] = rubik[4][2][2];

            rubik[4][0][2] = a1;
            rubik[4][1][2] = b1;
            rubik[4][2][2] = c1;

            a1 = rubik[3][0][0];
            rubik[3][0][0] = rubik[3][2][0];
            rubik[3][2][0] = rubik[3][2][2];
            rubik[3][2][2] = rubik[3][0][2];

            a1 = rubik[3][0][1];
            rubik[3][0][1] = rubik[3][1][0];
            rubik[3][1][0] = rubik[3][2][1];
            rubik[3][2][1] = rubik[3][1][2];
            rubik[3][1][2] = a1;

            break;

        case '2':
            char a2, b2, c2;
            a2 = rubik[0][0][2];
            b2 = rubik[0][1][2];
            c2 = rubik[0][2][2];

            rubik[0][0][2] = rubik[4][0][2];
            rubik[0][1][2] = rubik[4][1][2];
            rubik[0][2][2] = rubik[4][2][2];

            rubik[4][0][2] = rubik[1][0][2];
            rubik[4][1][2] = rubik[1][1][2];
            rubik[4][2][2] = rubik[1][2][2];

            rubik[1][0][2] = rubik[5][0][2];
            rubik[1][1][2] = rubik[5][1][2];
            rubik[1][2][2] = rubik[5][2][2];

            rubik[5][0][2] = a2;
            rubik[5][1][2] = b2;
            rubik[5][2][2] = c2;

            a2 = rubik[3][0][0];
            rubik[3][0][0] = rubik[3][0][2];
            rubik[3][0][2] = rubik[3][2][2];
            rubik[3][2][2] = rubik[3][2][0];
            rubik[3][2][0] = a2;

            b2 = rubik[3][0][1];
            rubik[3][0][1] = rubik[3][1][2];
            rubik[3][1][2] = rubik[3][2][1];
            rubik[3][2][1] = rubik[3][1][0];
            rubik[3][1][0] = b2;

            break;
        
        case '3':
            char a3, b3, c3;
            a3 = rubik[0][0][0];
            b3 = rubik[0][0][1];
            c3 = rubik[0][0][2];

            rubik[0][0][0] = rubik[2][0][0];
            rubik[0][0][1] = rubik[2][0][1];
            rubik[0][0][2] = rubik[2][0][2];

            rubik[2][0][0] = rubik[1][0][0];
            rubik[2][0][1] = rubik[1][0][1];
            rubik[2][0][2] = rubik[1][0][2];

            rubik[1][0][0] = rubik[3][0][0];
            rubik[1][0][1] = rubik[3][0][1];
            rubik[1][0][2] = rubik[3][0][2];

            rubik[3][0][0] = a3;
            rubik[3][0][1] = b3;
            rubik[3][0][2] = c3;

            a3 = rubik[4][0][0];
            rubik[4][0][0] = rubik[4][2][0];
            rubik[4][2][0] = rubik[4][2][2];
            rubik[4][2][2] = rubik[4][0][2];
            rubik[4][0][2] = a3;

            b3 = rubik[4][0][1];
            rubik[4][0][1] = rubik[4][1][0];
            rubik[4][1][0] = rubik[4][2][1];
            rubik[4][2][1] = rubik[4][1][2];
            rubik[4][1][2] = b3;

            break;

        case '4':
            char a4, b4, c4;
            a4 = rubik[0][0][0];
            b4 = rubik[0][0][1];
            c4 = rubik[0][0][2];

            rubik[0][0][0] = rubik[3][0][0];
            rubik[0][0][1] = rubik[3][0][1];
            rubik[0][0][2] = rubik[3][0][2];

            rubik[3][0][0] = rubik[2][0][0];
            rubik[3][0][1] = rubik[2][0][1];
            rubik[3][0][2] = rubik[2][0][2];

            rubik[1][0][0] = rubik[2][0][0];
            rubik[1][0][1] = rubik[2][0][1];
            rubik[1][0][2] = rubik[2][0][2];

            rubik[2][0][0] = a4;
            rubik[2][0][1] = b4;
            rubik[2][0][2] = c4;

            a4 = rubik[4][0][0];
            rubik[4][0][0] = rubik[4][0][2];
            rubik[4][0][2] = rubik[4][2][2];
            rubik[4][2][2] = rubik[4][2][0];
            rubik[4][2][0] = a4;

            b4 = rubik[4][0][1];
            rubik[4][0][1] = rubik[4][1][2];
            rubik[4][1][2] = rubik[4][2][1];
            rubik[4][2][1] = rubik[4][1][0];
            rubik[4][1][0] = b4;

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