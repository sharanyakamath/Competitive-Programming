#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,d,i,j,count=1,day;
	cin>>n>>m>>d;
	long long int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>b[i];
		a[i]=b[i];
	}
	sort(a,a+n);
	map <long long int,long long int> ans;
	set <long long int> max_in_each_day;
	ans.insert({a[0],1});
	max_in_each_day.insert(a[0]);
	for(i=1;i<n;i++){
		if(a[i] - *max_in_each_day.begin()<=d){
			max_in_each_day.insert(a[i]);
			ans.insert({a[i],++count});
		}
		else{
			day=ans[*max_in_each_day.begin()];
			ans.insert({a[i],day});
			max_in_each_day.erase(max_in_each_day.begin());
			max_in_each_day.insert(a[i]);
		}
	}
	cout<<count<<endl;
	for(i=0;i<n;i++){
		cout<<ans[b[i]]<<" ";
	}
	cout<<endl;
}