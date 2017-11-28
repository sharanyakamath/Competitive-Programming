
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int max=a[0]*n;
	for(i=1;i<n;i++)
	{
		if(a[i]*(n-i)>max)
			max=a[i]*(n-i);
	}
	printf("%d",max);
	return 0;
}

