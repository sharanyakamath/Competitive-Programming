#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,n,ans=0;
	cin>>n;
	long long int side[n],dist[n-1];
	for(i=0;i<n;i++){
		cin>>side[i];
		ans+=4*side[i];
		if(i<n-1)
			ans+=side[i];
		// cout<<ans<<endl;
	}
	for(i=0;i<n-1;i++){
		cin>>dist[i];
		ans+=dist[i];
		// cout<<ans<<endl;
	}
	cout<<ans<<endl;
}