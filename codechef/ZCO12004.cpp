#include<stdio.h>
using namespace std;
int main()
{
	long int n,i,cost=0,f;
	scanf("%ld",&n);
	long int a[n];
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	i=0;
	while(i<n)
	{
		f=i;
		if(i+1<n)
			i=a[i]<a[i+1]?i:i+1;
		cost+=a[i];
		if(i==f)
			i+=2;
		else
			i+=1;
	}
	printf("%ld",cost);
}
