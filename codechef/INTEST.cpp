    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<stdlib.h>
    int main()
    {
     int i=0,n,k,c=0;
     long int t;
    	scanf("%d%d",&n,&k);
    	while(i<n)
    	{
    		scanf("%ld",&t);
    		if(t%k==0)
    		c++;
    		i++;
    	}
    	printf("%d",c);
    return 0;
    } 
