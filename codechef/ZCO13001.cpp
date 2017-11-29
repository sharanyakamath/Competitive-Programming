#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	long int n,i,j;
	long long int rev=0;
	scanf("%ld",&n);
	long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			rev+=abs(a[j]-a[i]);
		}
	}
	printf("%lld",rev);
}
