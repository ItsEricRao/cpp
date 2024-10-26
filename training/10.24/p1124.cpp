#include<bits/stdc++.h>
using namespace std;
int n, p, curr;

int main() {
	cin >> n;
	char compress[n], dict[n], ans[n];
	cin >> compress >> p;
	for(int i = 0; i < n; i++) dict[i] = compress[i];
	sort(dict, dict+n);
	for(int i = 0; i < n; i++) {
		if(dict[i] == compress[p-1]) {
			curr = i;
			dict[i] = ')';
			break;
		}
	}
	ans[0] = compress[curr];
	for(int i=1; i<n; i++) {
		for(int j = n-1; j >= 0; j--) {
			if(dict[j] == compress[curr]) {
				curr = j;
				ans[i] = compress[curr];
				dict[j] = ')';
				break;
			}
		}	
	}
	for(int i = n-1; i >= 0; i--) cout << ans[i];
    return 0;
}