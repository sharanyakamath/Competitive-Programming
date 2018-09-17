#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long int n,s,x,i,a,b;
		cin>>n>>x>>s;
		for(i=1;i<=s;i++){
			cin>>a>>b;
			if(a==x)
				x=b;
			else if(b==x)
				x=a;
		}
		cout<<x<<endl;
	}
}