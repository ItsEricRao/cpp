#include <bits/stdc++.h>
typedef long long ll;
const ll mod=1e9+7;
using namespace std;
int t,n,m1,m2,be,en,ans=0;
vector<pair<int,int> >p1;
vector<pair<int,int> >p2;
priority_queue<int, vector<int>, greater<int>> q1;  // 小根堆
priority_queue<int, vector<int>, greater<int>> q2;  // 小根堆
bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first < b.first;
}
int check(int x) {
	int cnt1=0,cnt2=0;
	while(!q1.empty()) q1.pop();
	while(!q2.empty()) q2.pop();
	for(int i=1;i<=x;i++) q1.push(0);
	for(int i=1;i<=n-x;i++) q2.push(0);
	for(auto u:p1) {
		int k=q1.top();
		if(k<u.first) {
			q1.pop();
			q1.push(u.second);
			cnt1++;
		}
	}
	for(auto u:p2) {
		int k=q2.top();
		if(k<u.first) {
			q2.pop();
			q2.push(u.second);
			cnt2++;
		}
	}
	return cnt1+cnt2;
}
void solve(){
	cin>>n>>m1>>m2;
	for(int i=1;i<=m1;i++) {
		cin>>be>>en;
		p1.push_back(make_pair(be,en));
	}
	for(int i=1;i<=m2;i++) {
		cin>>be>>en;
		p2.push_back(make_pair(be,en));
	}
	sort(p1.begin(), p1.end(), cmp);
    sort(p2.begin(), p2.end(), cmp);
	for(int i=1;i<=n;i++) {
		ans=max(ans,check(i));
	}
	cout << ans;
	return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    t=1;
    while(t--){
		solve();
    }
    return 0;
}