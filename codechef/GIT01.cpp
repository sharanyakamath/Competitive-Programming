#include<stdio.h>
using namespace std;
int main()
{
	int t,n,m,i=0,j,k,count1,count2;
	scanf("%d",&t);
	int c;
	while(i<t)
	{
		count1=0;
		count2=0;
		scanf("%d%d",&n,&m);
		char cake[n][m];
		for(j=0;j<n;j++)
		{
			scanf("%s",cake[j]);
		}

		//start with rgrgrg
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=m;k++)
			{
				if(j%2==1 && k%2==1 && cake[j-1][k-1]!='R')
				{count1+=3;}
		
				if(j%2==1 && k%2==0 && cake[j-1][k-1]!='G')
				{count1+=5;}
		
				if(j%2==0 && k%2==1 && cake[j-1][k-1]!='G')
				{count1+=5;}

				if(j%2==0 && k%2==0 && cake[j-1][k-1]!='R')
				{count1+=3;}
			}
		}
		//start with grgrgr
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=m;k++)
			{
				if(j%2==1 && k%2==1 && cake[j-1][k-1]!='G')
				{count2+=5;}
				
				if(j%2==1 && k%2==0 && cake[j-1][k-1]!='R')
				{count2+=3;}
			
				if(j%2==0 && k%2==1 && cake[j-1][k-1]!='R')
				{count2+=3;}

				if(j%2==0 && k%2==0 && cake[j-1][k-1]!='G')
				{count2+=5;}
			}
		}
		c=(count1>count2?count2:count1);
		printf("%d\n",c);
		i++;
	}
		
}	
