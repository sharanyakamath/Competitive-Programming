    #include<stdio.h>
    #include<math.h>
    #include<stdlib.h>
    #include<string.h>
    int main()
    {
    	int x;
    	float y;
    	scanf("%d %f",&x,&y);
    	if(x%5!=0)
    		printf("%.2f",y);
    	else
    	{
    		if(x+0.5>y)
    			printf("%.2f",y);
    		else
    			printf("%.2f",y-x-0.5);
    	}
    	return 0;
    } 
