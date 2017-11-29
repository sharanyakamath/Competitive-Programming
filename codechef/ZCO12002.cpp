#include<limits.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	long int n,x,y,i,j,t1,t2,min;
	scanf("%ld%ld%ld",&n,&x,&y);
	long int N[n][2],X[x],Y[y],a[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld%ld",&N[i][0],&N[i][1]);
	}
	for(i=0;i<x;i++)
		scanf("%ld",&X[i]);
	for(i=0;i<y;i++)
		scanf("%ld",&Y[i]);
	sort(X,X+x);
	sort(Y,Y+y);
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			if(X[j]>N[i][0])
				{t1=X[j-1]; break;}
		}
		for(j=0;j<y;j++)
		{
			if(Y[j]>=N[i][1])
				{t2=Y[j]; break;}
		}
		a[i]=t2-t1+1;
	}
	min=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("%ld",min);
}

