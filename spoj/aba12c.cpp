#include <bits/stdc++.h>
using namespace std;

int price(int n, int val[], int wt[]);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i,j;
		cin>>n>>k;
		int val[k],wt[k];
		for(i=0;i<k;i++){
			cin>>val[i];
			wt[i]=i+1;
		}
		cout<<price(k,val,wt)<<endl;
	}
}

int price( int n, int val[], int wt[])
{
    int dp[n+1],i,j;
    dp[0]=0;
    for(i=0;i<n;i++)
    	dp[i+1]=val[i];
 
    int ans = 0;

    for (i=0; i<=n; i++)
      for (j=0; j<n; j++)
        if (wt[j] <= i)
        	if(dp[i-wt[j]]>-1 && val[j]>-1)
            	dp[i] = min(dp[i], dp[i-wt[j]]+val[j]);
 
    return dp[n];
}