#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int n,m,i,pos,k,count=0,j;
scanf("%d%d",&n,&m);
int v[n];
for(i=0;i<n;i++)
{
	scanf("%d",&v[i]);
}
for(i=0;i<m;i++)
{
	scanf("%d",&pos);
	for(j=pos-1;j<n;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(v[j]==v[k])
				break;
		}
		if(k==n)
			count++;
	}
	printf("%d\n",count);
	count=0;
}
}


