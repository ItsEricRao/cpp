#include <bits/stdc++.h>
using namespace std;
vector<int> v1;
vector<int> v2;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n-1; i++) {
        v2.push_back((int)abs(v1[i+1] - v1[i]));
    }
    sort(v2.begin(), v2.end());
    int js = 1;
    bool flag = true;
    for (auto i:v2) {
        if (i!=js++) flag = false;
    }
    if (flag) cout << "Jolly" << endl;
    else cout << "Not jolly" << endl;
    return 0;
}