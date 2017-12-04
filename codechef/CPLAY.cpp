#include<stdio.h>

using namespace std;
int main()
{
	 
	int i,j,k,shotslefta=5,shotsleftb=5;
	char p[20];
	long int ta=0,tb=0;
	while(scanf("%s",p)!=EOF)	
	{
	ta=0; tb=0;
	shotslefta=5; shotsleftb=5;
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			if(p[i-1]=='1')
				ta++;
			shotslefta--;

		}
		else
		{
			if(p[i-1]=='1')
				tb++;
			shotsleftb--;
		}

		if(ta-tb>shotsleftb)
		{
			printf("TEAM-A %d\n",i);
			goto end;
		}
		if(tb-ta>shotslefta)
		{
			printf("TEAM-B %d\n",i);
			goto end;
		}
	}
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			if(p[i+9]=='1')
				ta++;

		}
		else
		{
			if(p[i+9]=='1')
				tb++;
		}
		if(i%2==0 && ta>tb)
		{
			printf("TEAM-A %d\n",i+10);
			goto end;
		}
		if(i%2==0 && tb>ta)
		{
			printf("TEAM-B %d\n",i+10);
			goto end;
		}
	}
	printf("TIE\n");
end:;
	}
}
	
