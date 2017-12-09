    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
    	long int t,N,Q,I,g,i=0,j,k;
    	cin>>t;
    	while(i<t)
    	{
    		cin>>g;
    		j=0;
    		long int c[g];
    		while(j<g)
    		{
    			cin>>I;
    			cin>>N;
    			cin>>Q;
    			if(N%2==1 && I==1 && Q==1)
    			{
    				c[j]=N/2;
    			}
    			else if(N%2==1 && I==1 && Q==2)
    			{
    				c[j]=N/2 + 1;
    			}
    			else if(N%2==1 && I==2 && Q==1)
    			{
    				c[j]=N-N/2;
    			}
    			else if(N%2==1 && I==2 && Q==2)
    			{
    				c[j]=N - N/2 -1;
    			}
    			else if(N%2==0)
    			{
    					c[j]=N/2;
    			}
    		j++;	
    		}
    		for(j=0;j<g;j++)
    			cout<<c[j]<<endl;
    	i++;	
    	}
    } 
