#include<stdio.h>
using namespace std;
int main()
{
	long int n,k,i,j,count=0;
	scanf("%ld%ld",&n,&k);
	long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]<k)
			count ++;
		}
	}
	printf("%ld ",count);
}
