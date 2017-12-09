    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
    	long int t,i=0,j,k,n,x;
    	scanf("%ld",&t);
    	long int c[t];
    	while(i<t)
    	{
    		scanf("%ld",&n);
    		vector<long int> v;
    		for(j=0;j<n;j++)
    		{
    			cin>>x;
    			v.push_back(x);
    		}
    		cin>>k;
    		x=v[k-1];
    		sort(v.begin(),v.end());
    		for(j=0;j<n;j++)
    		{
    			if(v[j]==x)
    			{
    				c[i]=j+1;
    				break;
    			}
    		}
    		i++;
    	}
    	for(i=0;i<t;i++)
    		cout<<c[i]<<endl;
    } 
