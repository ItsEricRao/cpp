#include <iostream>
using namespace std;
int arr[10010];
int k, l, n, cnt1 = 0, cnt2 = 0;
bool flshd;

bool flush(int cnt1, int cnt2, int k, int l) {
    return cnt1 >= k && cnt2 >= l;
}

int main() {
    cin >> k >> l >> n;
    for (int i = 0; i < n; i++) {
        char s;
        cin >> s;
        arr[i] = s - '0';
    }
    flshd = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cnt1++;
            cnt2 = 0;
        } else {
            cnt2++;
            if (flush(cnt1, cnt2, k, l)) {
                cout << i + 1 << endl;
                flshd = true;
                cnt2 = 0;
            }
            cnt1 = 0;
        }
    }

    if (!flshd) {
        cout << "NO" << endl;
    }

    return 0;
}