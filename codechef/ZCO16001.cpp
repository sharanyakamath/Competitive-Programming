#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long int n,k,i,t;
	scanf("%ld%ld",&n,&k);
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+n);
	for(i=0;i<k;i++)
	{
		if(a[n-1]<b[n-1])
		{
			t=a[n-1];
			a[n-1]=b[0];
			b[0]=t;
			sort(a,a+n);
			sort(b,b+n);
		}
		else
		{
			t=b[n-1];
			b[n-1]=a[0];
			a[0]=t;
			sort(a,a+n);
			sort(b,b+n);
		}
	}
	printf("%lld",a[n-1]+b[n-1]);
}
