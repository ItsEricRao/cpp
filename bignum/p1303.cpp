#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int arr1[10001],arr2[10001],len,ans[10001];
int main ()
{
    cin>>s1>>s2;
    int len1=s1.length();
	int len2=s2.length();
    for(int i=1;i<=len1;i++)arr1[i]=s1[len1-i]-'0';
    for(int i=1;i<=len2;i++)arr2[i]=s2[len2-i]-'0';
	for(int i=1;i<=len2;i++)
	for(int j=1;j<=len1;j++)
	ans[i+j-1]+=arr1[j]*arr2[i];
    for(int i=1;i<len1+len2;i++)
	if(ans[i]>9)
	{
		ans[i+1]+=ans[i]/10;
		ans[i]%=10;
	}
	len=len1+len2;
    while(ans[len]==0&&len>1)len--;
    for(int i=len;i>=1;i--)cout<<ans[i];
    return 0;
}