#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,i,range_s,range_t,ans;
	cin>>n>>m>>x;
	int s[n], t[m];
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<m;i++)
		cin>>t[i];

	sort(s,s+n);
	sort(t,t+m);
	range_s=s[n-1]-s[0];
	range_t=t[m-1]-t[0];

	ans=range_s%x + range_t%x;
	cout<<ans<<endl;
}