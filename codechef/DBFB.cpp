#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;


long long int fib(long long int n, long long int a, long long int b)
{
    if(n == 1)
        return a;
    if(n==2)
    	return b;
    long long int ans;
    long long int i = 3;
    while(i <= n)
    {
        ans = (a%MOD+b%MOD) % MOD;
        a = b;
        b = ans;
        i++;
    }
    return ans;
}

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int m,n,i,j,result=0,suma=0,sumb=0;
		cin>>m>>n;
		long long int a[m],b[m];
		for(i=0;i<m;i++){
			cin>>a[i];
			suma=((suma%MOD) + ((a[i]%MOD)*(m%MOD))%MOD) %MOD;
		}
		for(i=0;i<m;i++){
			cin>>b[i];
			sumb=((sumb%MOD) + ((b[i]%MOD)*(m%MOD))%MOD) %MOD;
		}
		
		result=fib(n,suma,sumb)%MOD;
		cout<<result<<endl;
	}
}