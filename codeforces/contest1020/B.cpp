#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,student;
	cin>>n;
	int p[n];
	for(i=0;i<n;i++)
		cin>>p[i];
	for(i=0;i<n;i++){
		set <int> hole;
		student=i+1;
		while(hole.find(student)==hole.end()){
			hole.insert(student);
			student=p[student-1];
		}
		cout<<student<<" ";
	}
	cout<<endl;
}