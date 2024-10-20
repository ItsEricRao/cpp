#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n;

struct Student {
    int chn=-1, mat=-1, eng=-1;
    int tot=-1, tot2=-1, mx=-1;
    int ord=0, rank=-1;
    bool flag = false;
} s[MAXN];

bool cmp1(Student x, Student y) {
    if (x.tot != y.tot) return x.tot > y.tot;
    else if (x.tot2 != y.tot2) return x.tot2 > y.tot2;
    else return x.mx >= y.mx;
}

bool cmp2(Student x, Student y) {
    return x.ord < y.ord;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s[i].ord = i;
        cin >> s[i].chn >> s[i].mat >> s[i].eng;
        s[i].tot = s[i].chn + s[i].mat + s[i].eng;
        s[i].tot2 = s[i].chn + s[i].mat;
        s[i].mx = max(s[i].chn, s[i].mat);
    }
    sort(s+1, s+1 + n, cmp1);
    for (int i = 1; i <= n; i++) {
        if (s[i].tot == s[i-1].tot && s[i].tot2 == s[i-1].tot2 && s[i].mx == s[i-1].mx) s[i].rank = s[i-1].rank;
        else s[i].rank = i;
    }
    sort(s+1, s+1 + n, cmp2);
    for (int i = 1; i <= n; i++) cout << s[i].rank << endl;
    return 0;
}