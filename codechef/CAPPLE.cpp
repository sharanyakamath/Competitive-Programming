    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<math.h>
    int main()
    {
    	int n,k,j,t,i=0,c[10];
    	scanf("%d",&t);
    	while(i<t)
    	{
    		c[i]=0;
    		scanf("%d",&n);
    		int a[n];
    		for(j=0;j<n;j++)
    			scanf("%d",&a[j]);
    		for(j=0;j<n;j++)
    		{
    			if(a[j]==0)
    				goto end;
    			for(k=j+1;k<n;k++)
    			
    				if(a[j]==a[k])
    				{
    					a[k]=0;
    				}
    			c[i]++;
    			end: printf("");
    		}
    	i++;
    	}
    	for(i=0;i<t;i++)
    		printf("%d\n",c[i]);
    return 0;
    }
     
