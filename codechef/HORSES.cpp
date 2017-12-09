    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
    	long int t,i=0,j,k,n,x,min;
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
    		sort(v.begin(),v.end());
    		min=v[1]-v[0];
    		for(j=2;j<n;j++)
    		{
    			if(min>v[j]-v[j-1])
    				min=v[j]-v[j-1];
    		}
    		c[i]=min;
    		i++;
    	}
    	for(i=0;i<t;i++)
    		cout<<c[i]<<endl;
    } 
