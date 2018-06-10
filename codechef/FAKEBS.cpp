#include <bits/stdc++.h>
#define  lli unsigned long long int
using namespace std;
 
struct A2{
	lli value, position;
};
 
lli bs2(struct A2 a[], lli n, lli x){
	lli low=0,high=n-1,mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(a[mid].value==x)
			return a[mid].position;
		else if(a[mid].value>x)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
 
lli bs(lli a[], lli n, lli x){
	lli low=0,high=n-1,mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(a[mid]==x)
			return mid;
		else if(a[mid]>x)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
 
lli findsizeofpath(lli n, lli pos){
	lli low=0,high=n-1,mid,size=0;
	while(low<=high){
		size++;
		mid=low+(high-low)/2;
		if(mid==pos)
			return size;
		else if(mid>pos)
			high=mid-1;
		else
			low=mid+1;
	}
	return 0;
}
 
void fillpath(lli path[][2], lli a[], lli n, lli pos){
	lli low=0,high=n-1,mid,i=0;
	while(low<=high){
		mid=low+(high-low)/2;
		path[i][0]=a[mid];
		if(mid==pos)
			{path[i][1]=0; return;} // 0 means reached
		else if(mid>pos)
			{path[i][1]=1; high=mid-1; i++;}// 1 means move left
		else
			{path[i][1]=2; low=mid+1; i++;} // 2 means move right
	}
}
 
bool compare(struct A2 i1, struct A2 i2){
	if(i1.value<i2.value)
		return true;
	return false;
}
 
int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n,q,i,j;
		cin>>n>>q;
		lli a[n],a1[n];
		struct A2 a2[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			a1[i]=a[i];
			a2[i].value=a[i];
			a2[i].position=i;
		}
		sort(a1,a1+n);
		sort(a2, a2+n, compare);
 
		while(q--){
			lli x;
			cin>>x;
			lli pos=bs2(a2,n,x); // position in unsorted array
 
		
				lli size=findsizeofpath(n,pos);
				lli lesswanted=0, greatwanted=0, less=0, great=0, pos1, result=0;
				less= bs(a1,n,x); // position in sorted array
				great=n-1-less;
				lli path[size][2];
				fillpath(path,a,n,pos);
				
				for(i=0;i<size;i++){
					if(path[i][1]==1 && path[i][0]<x){
						greatwanted++;
					}
					else if(path[i][1]==2 && path[i][0]>x){
						lesswanted++;
					}
					else if(path[i][1]==1 && path[i][0]>x)
						great--;
					else if(path[i][1]==2 && path[i][0]<x)
						less--;
				}
				if(greatwanted>=lesswanted){
					 
					if(great>=greatwanted){
						cout<<result+greatwanted<<endl;
					}
					else{
						cout<<-1<<endl;
					}
				}
				else{
					 
					if(less>=lesswanted){
						cout<<result+lesswanted<<endl;
					}
					else{
						cout<<-1<<endl;
					}
				
			}
		}
	}
} 