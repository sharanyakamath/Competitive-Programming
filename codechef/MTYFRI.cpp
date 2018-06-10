#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,i,j,a=0,b=0,motusum=0,tomusum=0,swaps=0;
		cin>>n>>k;
		long long int motusize=ceil(n/(float)2), tomusize=n/2;
		long long int motu[motusize], tomu[tomusize];
		for(i=0;i<n;i++){
			if(i%2==0){
				cin>>motu[a];
				motusum+=motu[a];
				a++;
			}
			else{
				cin>>tomu[b];
				tomusum+=tomu[b];
				b++;
			}
		}
		while(swaps<=k){
			if(tomusum>motusum){
				cout<<"YES"<<endl;
				break;
			}
			else{
				sort(motu,motu + motusize);
				sort(tomu,tomu + tomusize);
				tomusum=tomusum-tomu[0]+motu[motusize-1];
				motusum=motusum-motu[motusize-1]+tomu[0];
				long long int t=tomu[0];
				tomu[0]=motu[motusize-1];
				motu[motusize-1]=t;
				swaps++;
			}
		}
		if(swaps>k){
			cout<<"NO"<<endl;
		}
	}
}