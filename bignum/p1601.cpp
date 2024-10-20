#include <bits/stdc++.h>
using namespace std;
const int MAXL = 100;
string s1;
string s2;
int arr1[MAXL], arr2[MAXL], ans[MAXL];
void add(int a[], int b[]) {
    for (int i = 0; i < MAXL - 1; i++) {
        ans[i] = a[i] + b[i];
        if (ans[i-1] >= 10)
        {
            ans[i-1] %= 10;
            ans[i]++;
        }

    }
}

int main() {
    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));
    memset(ans, 0, sizeof(ans));
    cin >> s1;
    int len1 = s1.length();
    for (size_t i = 0; i < len1; i++) {
        arr1[len1 - i - 1] = s1[i] - '0';
    }
    // cout << arr1[3] << arr1[2] << arr1[1] << arr1[0] << endl;
    cin >> s2;
    int len2 = s2.length();
    for (size_t i = 0; i < len2; i++) {
        arr2[len2 - i - 1] = s2[i] - '0';
    }
    // cout << arr2[3] << arr2[2] << arr2[1] << arr2[0] << endl;
    add(arr1, arr2);

    int j;
    for (j = MAXL - 1; j >= 1; j--) {
        if (ans[j] != 0) {
            break;
        }
    }
    for (; j >= 0; j--)
    {
        cout << ans[j];
    }
    cout << endl;    
    
    return 0;    
}