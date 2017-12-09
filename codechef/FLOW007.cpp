    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    int main()
    {
    	int t,i=0;
    	int n,j;
    	scanf("%d",&t);
    	int k[1000];
    	while(i<t)
    	{	k[i]=0;
    		scanf("%ld",&n);
    		for(j=n;j>0;j/=10)
    		k[i]=(k[i]*10)+(j%10);
    		i++;	
    	}
    	for(j=0;j<t;j++)
    	printf("%ld\n",k[j]);
    return 0;
    } 
