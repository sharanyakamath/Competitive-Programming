#include<stdio.h>
#include<math.h>
long long int diamonds(long long int number)
{
	long long int a,e=0,o=0,n;
	for(n=number;n!=0;n/=10)
	{
		if((n%10)%2==0)
			e+=n%10;
		else
			o+=n%10;
	}
	a=abs(e-o);
	return a;
}
int main()
{
long long int t,i=0,j,k,n,number,d=0;
scanf("%lld",&t);
long long int c;
while(i<t)
{
	scanf("%lld",&n);
	for(j=1;j<=n;j++)
	{
		for(k=1;k<j;k++)
		{
			number=k+j;
			d+=diamonds(number);
		}
	}
	d*=2;
	for(j=1;j<=n;j++)
	{
		number=j+j;
		d+=diamonds(number);
	}
	c=d;
	printf("%lld\n",c);
	d=0;
	i++;
}
	
}

