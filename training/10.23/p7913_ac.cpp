#include<bits/stdc++.h>
typedef long long ll;
const ll mod=1e9+7;
using namespace std;
struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) return a.first > b.first; // first升序
        return a.second >= b.second; // first相同，second升序
    }
};
int t,n,m1,m2,be,en,ans=0;
const int maxn=1e6;
int f1[maxn],f2[maxn];
int pre1[maxn],pre2[maxn];
vector<pair<int,int> >p1;
vector<pair<int,int> >p2;
priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> q1;
// q1的first是时间 second是编号
priority_queue<int, vector<int>, greater<int>> q2;
// q1  是用来记录已经使用的廊桥 q2 是记录还没有被使用的廊桥
//priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> q2;
void init(){
    for(int i=1;i<=n;i++){
        q2.push(i);
    }
//    q1.push(make_pair(0,1) );
//    q2.pop();
    for(auto u:p1){
            // 可能是 一些已经飞完的廊桥我们没处理
            //cout<<u.first<<" "<<u.second<<endl;
           while(!q1.empty()&& q1.top().first<u.first ){
                q2.push(q1.top().second);
                q1.pop();
           }
                 if(!q2.empty()) {
                    f1[q2.top()]++;
                 //   cout<<q2.top()<<endl;
                    q1.push(make_pair(u.second,q2.top()));
                    q2.pop();
                }
//            while(q1.top().first<u.first&&q1.top().first!=0) {
//                int y=q1.top().second;
//                q1.pop();
//                q1.push(make_pair(0,y));
//            }
    }
    while(!q1.empty()) {q1.pop();}
    while(!q2.empty()) {q2.pop();}
    for(int i=1;i<=n;i++){
        q2.push(i);
    }
    for(auto u:p2){
            // 可能是 一些已经飞完的廊桥我们没处理
            //cout<<u.first<<" "<<u.second<<endl;
           while(!q1.empty()&& q1.top().first<u.first ){
                q2.push(q1.top().second);
                q1.pop();
           }
            if(!q2.empty()) {
                    f2[q2.top()]++;
                 //   cout<<q2.top()<<endl;
                    q1.push(make_pair(u.second,q2.top()));
                    q2.pop();
            }
//            while(q1.top().first<u.first&&q1.top().first!=0) {
//                int y=q1.top().second;
//                q1.pop();
//                q1.push(make_pair(0,y));
//            }
    }
//    q1.push(make_pair(0,1) );
//    q2.pop();
//    for(auto u:p2){
//            cout<<u.first<<" "<<u.second<<endl;
//            auto x=q1.top();
//            if( !q1.empty()&&q1.top().first<u.first){
//                auto x=q1.top();
//                f2[q1.top().second]++;
//                q1.pop();
//                q1.push(make_pair(u.second,x.second));
//            }
//            else{
//                 if(q2.empty()) continue;
//                else{
//                    f2[q2.top()]++;
//                    q1.push(make_pair(u.second,q2.top()));
//                    q2.pop();
//                }
//            }
//            while(q1.top().first<u.first&&q1.top().first!=0) {
//                int y=q1.top().second;
//                q1.pop();
//                q1.push(make_pair(0,y));
//            }
    for(int i=1;i<=n;i++){
        pre1[i]=pre1[i-1]+f1[i];
        pre2[i]=pre2[i-1]+f2[i];
       // cout<<pre1[i]<<" "<<pre2[i]<<endl;
    }
}
void slove(){
	cin>>n>>m1>>m2;
	for(int i=1;i<=m1;i++){
		cin>>be>>en;p1.push_back(make_pair(be,en));
	}
	for(int i=1;i<=m2;i++){
		cin>>be>>en;p2.push_back(make_pair(be,en));
	}
	sort(p1.begin(), p1.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.first < b.first;
    });

    sort(p2.begin(), p2.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.first < b.first;
    });
    init();
	for(int i=0;i<=n;i++){
			//cout<<check(i)<<endl;
		ans=max(ans,pre1[i]+pre2[n-i]);
	}
	cout<<ans<<endl;
//    for(int i=0;i<=n;i++){
//			cout<<check(i)<<endl;
//		if(ans==pre1[i]+pre2[n-i]) {
//            cout<<i<<endl;
//		};
//	}
//
//cout<<pre1[9]<<" "<<pre2[n-9]<<endl;
   // cout<<pre1[2]<<" ";
	return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    t=1;
    while(t--){
		slove();
    }
    return 0;
}