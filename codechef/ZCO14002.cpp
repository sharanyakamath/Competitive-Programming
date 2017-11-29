#include<stdio.h>
int min(int arr[],int a,int b,int c)
{
	int m=(arr[a]<arr[b])?a:b;
	m=(arr[m]<arr[c])?m:c;
	return m;
}
int main()
{
	int n,i,v=0,x,m=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<n-3;i=x+3)
	{
		x=min(a,i,i-1,i-2);
		printf("%d ",x);
		v+=a[x];
	}
		
	if(n-x-1>2)
	{
		m=a[i];
		printf("%d ",m);
		if(i+1<n && a[i+1]<m)
			m=a[i+1];
		printf("%d ",m);
		v+=m;
	}
	printf("%d ",v);
	
}
