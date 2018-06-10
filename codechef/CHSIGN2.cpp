#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli max_subseq(lli a[], lli n){
	lli incl[n],excl[n],i,j;
	incl[0]=a[0];
	excl[0]=0;
	for(i=1;i<n;i++){
		incl[i]=max(excl[i-1]+a[i], incl[i-1]);
		excl[i]=incl[i-1];
	}
	return incl[n-1];
	incl[i-3]+ 
}

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n,i,max;
		cin>>n;
		lli a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		max=max_subseq(a,n);
		cout<<max<<endl;
	}
	return 0;
}