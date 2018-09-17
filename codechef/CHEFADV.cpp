#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,m,x,y;
		cin>>n>>m>>x>>y;
		if((n-1)%x==0 && (m-1)%y==0)
			cout<<"Chefirnemo"<<endl;
		else if(n>=2 && m>=2 && (n-2)%x==0 && (m-2)%y==0)
			cout<<"Chefirnemo"<<endl;
		else 
			cout<<"Pofik"<<endl;
	}
}