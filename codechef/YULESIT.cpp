#include<stdio.h>
using namespace std;
int main()
{
long int n,s,i=0,j,k,flag;
scanf("%ld",&n);
long int c[n];
while(i<n)
{
	scanf("%ld",&s);
	long int a[s];
	for(j=0;j<s;j++)
	{
		scanf("%ld",&a[j]);
	}
	for(j=0,flag=0;j<s;j++)
	{
		if(a[j]==0)
			continue;
		for(k=j+1;k<s;k++)
		{
			if(a[k]==a[j])
			{
				a[k]=0;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{	c[i]=a[j]; goto check;}
		flag=0;
	}
	check:;
	i++;
}
for(i=0;i<n;i++)
	printf("%ld\n",c[i]);
}
	
	
		
