#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long int a,b,x,y,count=0,g;
	cin>>a>>b>>x>>y;
	g=__gcd(x,y);
	x/=g;
	y/=g;
	count=min(a/x,b/y);
	cout<<count<<endl;
}