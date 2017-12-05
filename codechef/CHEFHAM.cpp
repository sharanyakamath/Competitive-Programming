#include<stdio.h>
using namespace std;
int main()
{
	long long int t,n,i=0,j,k,f,ham=0;
	scanf("%lld",&t);
	while(i<t)
	{
		scanf("%lld",&n);
		long long int a[2][n],b[n];
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[0][j]);
			a[1][j]=0;
		}
		for(j=0,f=0;j<n;j++)
		{
				for(k=(j+1)%n;k!=j;k=(k+1)%n)
				{
					if(a[1][k]==0 && a[0][k]!=a[0][j])
					{
						b[f]=a[0][k];
						f++;
						a[1][k]=1;
						ham++;
						break;
					}
				}
				if(k==j)
				{
					for(k=0;k<n;k++)
					{
						if(a[1][k]==0)
						{
							b[f]=a[0][k];
							f++;
							a[1][k]=1;
							break;
						}
					}
				}
		}	
		printf("%lld\n",ham);
		for(j=0;j<n;j++)
			printf("%lld ",b[j]);
		printf("\n");
		ham=0;
		i++;
	}
}
				
			
			
		
