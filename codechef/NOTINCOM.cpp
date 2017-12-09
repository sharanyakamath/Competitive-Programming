    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    #include<stdlib.h>
    int main()
    {
    int a[100000],b[100000],c[100000],d=1,i,j,k,t,n,m;
    scanf("%d",&t);
    while(d<=t)
    {
            k=0;
            scanf("%d%d",&n,&m);
            for(i=0;i<n;i++)
                    scanf("%d",&a[i]);
            for(i=0;i<m;i++)
                    scanf("%d",&b[i]);
            for(i=0;i<n;i++)
                    for(j=0;j<m;j++)
                            if(a[i]==b[j])
                                    k++;
            c[d-1]=k;
            d++;
    }
    for(i=0;i<d-1;i++)
            printf("%d\n",c[i]);
    return 0;
    } 
