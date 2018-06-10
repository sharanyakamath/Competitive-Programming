#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a[], long long int min, long long int n){
        
        for(long long int i=2;i<=min;i++){
        	long long int flag=0;
        	for(long long int j=0;j<n;j++){
        		if(a[j]%i!=0){
        			flag=1;
        			break;
        		}
        	}
        	if(flag==0)
        		return 0; //gcd>1
        }
        return 1; //gcd=1
}

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,i,j,k,count=0,min=INT_MAX;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(min>a[i])
				min=a[i];
		}
		if(gcd(a,min,n)==0){
			cout<<-1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}