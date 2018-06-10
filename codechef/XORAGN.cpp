#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long int t;
	cin>>t;
	while(t--){
		unsigned long long int n,x=0,i,j;
		cin>>n;
		unsigned long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			x^=(2*a[i]);
		}
		cout<<x<<endl;
	}
}