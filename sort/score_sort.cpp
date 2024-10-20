#include <bits/stdc++.h>
using namespace std;
int n;

struct Student
{
    string name;
    int score;    
} a[20 + 5];

bool cmp(Student x, Student y) {
    if (x.score > y.score) return true;
    else if (x.score == y.score && x.name < y.name) return true;
    else return false; 
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].score;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].name << ' ' << a[i].score << endl;
    }

    return 0;
}
