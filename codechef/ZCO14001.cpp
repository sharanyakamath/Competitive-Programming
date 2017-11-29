#include<stdio.h>
using namespace std;
int main()
{
	long int n,h,i;
	int c,flag=0;
	scanf("%ld%ld",&n,&h);
	long int a[n];
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	i=0;
	while(1)
	{
		scanf("%d",&c);
		switch(c)
		{
			case 1:if(i>0)
					i--;
					break;
			case 2: if(i<n-1)
					i++;
					break;
			case 3: if(flag==0 && a[i]>0)
					{a[i]--;
					flag=1;}
					break;
			case 4: if(flag==1 && a[i]<h)
					{
						a[i]++;
						flag=0;
					}
					break;
			case 0: goto end;
		}
	}
	end:;
	for(i=0;i<n;i++)
	printf("%ld ",a[i]);
		
}
