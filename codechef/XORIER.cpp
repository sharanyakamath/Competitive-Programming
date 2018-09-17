#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli xorPairCount(lli arr[], lli n, lli x, lli y)
{
    lli result = 0;
 
    unordered_map<lli, lli> m;
 
    for (lli i=0; i<n ; i++)
    {
        lli curr_xor1 =  x^arr[i], curr_xor2 =  y^arr[i];
 
        if (m.find(curr_xor1) != m.end())
            result += m[curr_xor1];

        if (m.find(curr_xor2) != m.end())
            result += m[curr_xor2];
 
        m[arr[i]]++;
    }
 
    return result;
}

lli countXorPair(lli arr[], lli n) 
{ 
    lli odd = 0, even = 0; 
  
    for (lli i = 0; i < n; i++) { 
        if (arr[i] % 2 == 0) 
            even++; 
        else
            odd++; 
    } 
  
    return odd*(odd-1)/2 + even*(even-1)/2; 
} 
  
int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n,i,j,x,count=0,sum=0;
		cin>>n;
		lli a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sum+=xorPairCount(a,n,0,2);
		// cout<<"sum:"<<sum<<endl;
		// sum+=xorPairCount(a,n,2);
		// cout<<"sum:"<<sum<<endl;
		count+=countXorPair(a,n);
		// cout<<"count:"<<count<<endl;
		count-=sum;
		cout<<count<<endl;
	}
}