#include <bits/stdc++.h>
using namespace std;
int n;

struct Student
{
    int id;
    int chn;
    int mat;
    int eng;
    int tot;
} a[300 + 10];

bool cmp(Student x, Student y) {
    if (x.tot > y.tot) return true;
    else if (x.tot == y.tot && x.chn > y.chn) return true;
    else if (x.tot == y.tot && x.chn == y.chn && x.id < y.id) return true;
    else return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].chn >> a[i].mat >> a[i].eng;
        a[i].tot = a[i].chn + a[i].mat + a[i].eng;
        a[i].id = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << a[i].id << " " << a[i].tot << endl;
    }
    return 0;
}
