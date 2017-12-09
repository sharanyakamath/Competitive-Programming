    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    int main()
    {
            long long int a,b,i;
            scanf("%d%d",&a,&b);
            i=abs(a-b);
            if(i%10==9)
                    printf("%d",i-1);
            else
                    printf("%d",i+1);
            return 0;
    } 
