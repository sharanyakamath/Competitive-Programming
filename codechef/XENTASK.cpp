    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    int main()
    {
    	int ax=0,bx=0,ay=0,by=0,t,i=0,n;
    	long int x[100000],y[100000],j;
    	scanf("%d",&t);
    	int c[t];
    	while(i<t)
    	{
    		scanf("%d",&n);
    		for(j=0;j<n;j++)
    		{scanf("%ld",&x[j]);
    		if(j%2==0)
    		ax+=x[j];
    		else
    		bx+=x[j];
    		}
    		for(j=0;j<n;j++)
    		{
    		scanf("%ld",&y[j]);
    		if(j%2==0)
    		by+=y[j];
    		else
    		ay+=y[j];
    		}
    		if((ax+ay)>(bx+by))
    		c[i]=(bx+by);
    		else
    		c[i]=(ax+ay);
    		ax=0;
    		ay=0;
    		bx=0;
    		by=0;
    		i++;
    	}
    	for(i=0;i<t;i++)
    	printf("%d\n",c[i]);
    	return 0;
    } 
