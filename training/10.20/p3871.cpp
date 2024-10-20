#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, m;
priority_queue<int, vector<int>, less<int> > big_heap;
priority_queue<int, vector<int>, greater<int> > small_heap;

void input(int num) {
    if (big_heap.empty() || num <= big_heap.top()) big_heap.push(num);
    else small_heap.push(num);

    if (big_heap.size() > (big_heap.size() + small_heap.size() + 1) / 2) {
        small_heap.push(big_heap.top());
        big_heap.pop();
    }
    else if (big_heap.size() < (big_heap.size() + small_heap.size() + 1) / 2) {
        big_heap.push(small_heap.top());
        small_heap.pop();
    }
    
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        input(num);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string type; int num;
        cin >> type;
        if (type == "mid") cout << big_heap.top() << endl;
        else if (type == "add") {
            cin >> num;
            input(num);
        }
    }

    return 0;
}