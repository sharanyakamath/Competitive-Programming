#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,j,min=LLONG_MAX,max=LLONG_MIN,ans;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	ans=max-min+1 - n;
	cout<<ans<<endl;

}