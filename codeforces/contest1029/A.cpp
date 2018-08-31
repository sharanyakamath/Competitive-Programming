#include <bits/stdc++.h>
using namespace std;

int main(){
	ll n,k,i,j,l,p,count;
	cin>>n>>k;
	char s[n];
	cin>>s;
	count=0;
	for(i=0;i<n/2;i++){
		if(s[i]!=s[n-i-1]){
			break;
		}
		count++;
	}
	l = n + (n-count)*(k-1);
	char ans[l+1];
	ans[l]='\0';
	for(i=0;i<n;i++){
		ans[i]=s[i];
	}
	while(i<l){
		for(p=count;p<n;p++){
			ans[i++]=s[p];
		}
	}
	cout<<ans<<endl;
}