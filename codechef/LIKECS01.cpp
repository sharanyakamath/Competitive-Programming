    #include<iostream>
    #include<algorithm>
    #include<vector>
    #include<string.h>
    using namespace std;
    int main()
    {
    	int i,r=0,p,t,k=0;
    	char s[100],c;
    	scanf("%d",&t);
    	int ch[t];
    	while(k<t){
    	r=0;
    	scanf("%s",s);
    	vector<char> v(s,s+strlen(s));
    	
    	for(i=0;i<strlen(s);i++)
    	{
    		v[i]=s[i];
        }
       for(c='a';c<123;c++)
       {
       	p=count(v.begin(),v.end(),c);
       	if(p>=2)
       		r++;
       }
       if(r>=1)
      	ch[k]=1;
       else
        ch[k]=0;
        k++;
    }
    for(i=0;i<t;i++)
    if(ch[i]==1)
    printf("yes\n");
    else
    printf("no\n");
    } 
