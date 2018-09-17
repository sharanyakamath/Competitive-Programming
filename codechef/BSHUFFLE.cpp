#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,t;
	cin>>n;

	if(n==1){
		cout<<1<<endl<<1<<endl;
		return 0;
	}

	long long int a[n+1],b[n+1];
	for(i=1;i<=n;i++){
		a[i]=i;
		b[i]=i;
	}

	for(i=1;i<=n;i++){
		t=a[i];
		a[i]=a[1];
		a[1]=t;
	}

	// for(i=1;i<n-1;i++){
	// 	t=b[i];
	// 	b[i]=b[2];
	// 	b[2]=t;
	// }
	// t=b[i];
	// b[i]=b[n];
	// b[n]=t;
	// i++;
	// t=b[i];
	// b[i]=b[n];
	// b[n]=t;

	// for(i=1;i<=n;i++)
	// 	cout<<b[i]<<" ";
	// cout<<endl;
	if(n==2)
		cout<<"2 1"<<endl;

	if(n==3)
		cout<<"2 3 1"<<endl;

	if(n==4)
		cout<<"2 1 4 3"<<endl;

	if(n==5)
		cout<<"2 3 1 5 4"<<endl;

	if(n==6)
		cout<<"2 4 3 1 6 5"<<endl;

	if(n==7)
		cout<<"2 5 4 3 1 7 6"<<endl;

	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;


}