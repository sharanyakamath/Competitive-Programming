#include <bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;


int main(){
	ulli t;
	cin>>t;
	while(t--){
		char M[100000],N[100000];
		ulli i,j,q,x,y;
		cin>>M>>N;
		// ulli n=strlen(N), m=strlen(M);
		// ulli dp[n+1][m+1];
		// memset(dp, 0, sizeof(dp));
		// for(i=1;i<=n;i++)
		// 	dp[i][0]=N[i-1]-'0';
		// for(i=1;i<=m;i++)
		// 	dp[0][i]=M[i-1]-'0';

		// for(i=1;i<=n;i++){
		// 	for(j=1;j<=m;j++){
		// 		if(dp[i-1][j]==0 || dp[i][j-1]==0)
		// 			dp[i][j]=1;
		// 		else
		// 			dp[i][j]=0;
		// 	}
		// }

		// for(i=0;i<=n;i++){
		// 	for(j=0;j<=m;j++){
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		cin>>q;
		char ans[q+1];
		i=0;
		while(q--){
			cin>>x>>y;
			if(x%2==0 && y%2==0 && ((M[x-1]=='0' && N[y-1]=='0') || (M[x-1]=='1' && N[y-1]=='1')))
				ans[i]='0';
			else if((x%2==0 && y%2==1 && M[x-1]=='0' && N[y-1]=='1') || (x%2==1 && y%2==0 && M[x-1]=='1' && N[y-1]=='0'))
				ans[i]='0';
			else
				ans[i]='1';
			// ans[i]=(char)(dp[x][y]+48);
			i++;
		}
		ans[i]='\0';
		cout<<ans<<endl;
	}
}