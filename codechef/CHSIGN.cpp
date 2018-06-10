#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli a[100000];

bool comparea(lli i1, lli i2)
{
    return (a[i1] < a[i2]);
}

lli possible(lli pos1, lli pos2){
	if(a[pos1+1]>a[pos1]+a[pos2])
		return 1;
	return 0;
}

void functa(lli b[],lli n){
	lli pos[n],k=0,i,size,sum=0,sum1,sum2;
	for(i=0;i<n;i++){
		if(i==0 && i+1<n){
			if(a[i+1] > a[i]){
				pos[k]=i;
				k++;
			}
		}
		else if(i==n-1 && i-1>=0){
			if(a[i-1]>a[i]){
				pos[k]=i;
				k++;
			}
		}
		else{
			if(a[i+1]>a[i] && a[i-1]>a[i]){
				pos[k]=i;
				k++;
			}
		}
	}
	size=k;
	for(i=0;i<size;i++){
		if(i+4<size){
			if(pos[i+1]-pos[i]==2 && pos[i+2]-pos[i+1]==2 && pos[i+3]-pos[i+2]==2 && pos[i+4]-pos[i+3]==2){
				if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4]));

				else if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					if(a[pos[i+2]]>=a[pos[i+3]])
						pos[i+3]=-1;
					else
						pos[i+2]=-1;
				}

				else if(possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					if(a[pos[i+1]]>=a[pos[i+2]])
						pos[i+2]=-1;
					else
						pos[i+1]=-1;
				}

				else if(possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					sum1=a[pos[i]] + a[pos[i+1]] + a[pos[i+3]];
					sum2=a[pos[i]] + a[pos[i+2]];
					if(sum1>sum2){
						pos[i+2]=-1;
					}
					else{
						pos[i+1]=-1; pos[i+3]=-1;
					}
				}
			
				else if(!possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					sum1=a[pos[i]]+a[pos[i+2]]+a[pos[i+3]];
					sum2=a[pos[i+1]]+a[pos[i+2]]+a[pos[i+3]];
					if(sum1>sum2)
						pos[i+1]=-1;
					else
						pos[i]=-1;
				}

				else if(!possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					if(a[pos[i]]>=a[pos[i+1]] && a[pos[i+2]]>=a[pos[i+3]])
						pos[i+1]=-1, pos[i+3]=-1;
					else if(a[pos[i]]<a[pos[i+1]] && a[pos[i+2]]>=a[pos[i+3]])
						pos[i]=-1, pos[i+3]=-1;
					else if(a[pos[i]]>=a[pos[i+1]] && a[pos[i+2]]<a[pos[i+3]])
						pos[i+1]=-1, pos[i+2]=-1;
					else
						pos[i]=-1, pos[i+2]=-1;
				}

				else if(!possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					sum1=a[pos[i]] + a[pos[i+2]] + a[pos[i+3]];
					sum2=a[pos[i+1]] + a[pos[i+3]];
					if(sum1>sum2){
						pos[i+1]=-1;
					}
					else{
						pos[i]=-1; pos[i+2]=-1;
					}
				}

				else if(!possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && possible(pos[i+3],pos[i+4])){
					sum1=a[pos[i]]+max(a[pos[i+2]],a[pos[i+3]]);
					sum2=a[pos[i+1]]+a[pos[i+3]];
					if(sum1>sum2){
						pos[i+1]=-1;
						if(a[pos[i+2]]>a[pos[i+3]])
							pos[i+3]=-1;
						else
							pos[i+2]=-1;
					}
					else{
						pos[i]=-1;
						pos[i+2]=-1;
					}
				}

				else if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					if(a[pos[i+3]]>=a[pos[i+4]])
						pos[i+4]=-1;
					else
						pos[i+3]=-1;
				}

				else if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					sum1=a[pos[i]]+a[pos[i+1]]+a[pos[i+2]]+a[pos[i+4]];
					sum2=a[pos[i]]+a[pos[i+1]]+a[pos[i+3]];
					if(sum1>=sum2)
						pos[i+3]=-1;
					else
						pos[i+2]=-1, pos[i+4]=-1;
				}

				else if(possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					if(a[pos[i+1]]>=a[pos[i+2]])
						pos[i+2]=-1;
					else
						pos[i+1]=-1;
					if(pos[i+3]>=pos[i+4])
						pos[i+4]=-1;
					else
						pos[i+3]=-1;
				}

				else if(possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					sum1=a[pos[i]] + a[pos[i+1]] + max(a[pos[i+3]],a[pos[i+4]]);
					sum2=a[pos[i]] + a[pos[i+2]] +a[pos[i+4]];
					if(sum1>=sum2){
						pos[i+2]=-1;
						if(a[pos[i+3]]>=a[pos[i+4]])
							pos[i+4]=-1;
						else
							pos[i+3]=-1;
					}
					else{
						pos[i+1]=-1; pos[i+3]=-1;
					}
				}
				
				else if(!possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					if(a[pos[i]]>=a[pos[i+1]])
						pos[i+1]=-1;
					else
						pos[i]=-1;
					if(a[pos[i+3]]>=a[pos[i+4]])
						pos[i+4]=-1;
					else
						pos[i+3]=-1;
				}

				else if(!possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					if(a[pos[i]]>=a[pos[i+1]])
						pos[i+1]=-1;
					else 
						pos[i]=-1;
					if(a[pos[i+2]] + a[pos[i+4]]>=a[pos[i+3]])
						pos[i+3]=-1;
					else
						pos[i+2]=-1, pos[i+4]=-1;
				}

				else if(!possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]) && !possible(pos[i+3],pos[i+4])){
					if(a[pos[i+3]]>=a[pos[i+4]])
						pos[i+4]=-1;
					else
						pos[i+3]=-1;	
					if(a[pos[i+2]] + a[pos[i]]>= a[pos[i+1]]){
						pos[i+1]=-1;
					}
					else{
						pos[i]=-1; pos[i+2]=-1;
					}
				}

				else{
					sum1=a[pos[i]] + max(a[pos[i+2]] +a[pos[i+4]],a[pos[i+3]]);
					sum2=a[pos[i+1]] + max(a[pos[i+3]],a[pos[i+4]]);
					if(sum1>=sum2){
						pos[i+1]=-1;
						if(a[pos[i+2]] +a[pos[i+4]]>=a[pos[i+3]])
							pos[i+3]=-1;
						else
							pos[i+2]=-1, pos[i+4]=-1;
					}
					else{
						pos[i]=-1, pos[i+2]=-1;
						if(a[pos[i+3]]>=a[pos[i+4]])
							pos[i+4]=-1;
						else
							pos[i+3]=-1;
					}
				}
				i+=4;
			}
		}
	
			


			else if(i+3<size){
				if(pos[i+1]-pos[i]==2 && pos[i+2]-pos[i+1]==2 && pos[i+3]-pos[i+2]==2){
					if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3]));

					else if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3])){
						if(a[pos[i+2]]>=a[pos[i+3]])
							pos[i+3]=-1;
						else
							pos[i+2]=-1;
					}

					else if(possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3])){
						if(a[pos[i+1]]>=a[pos[i+2]])
							pos[i+2]=-1;
						else
							pos[i+1]=-1;
					}

					else if(possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3])){
						sum1=a[pos[i]] + a[pos[i+1]] + a[pos[i+3]];
						sum2=a[pos[i]] + a[pos[i+2]];
						if(sum1>sum2){
							pos[i+2]=-1;
						}
						else{
							pos[i+1]=-1; pos[i+3]=-1;
						}
					}
				
					else if(!possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3])){
						sum1=a[pos[i]]+a[pos[i+2]]+a[pos[i+3]];
						sum2=a[pos[i+1]]+a[pos[i+2]]+a[pos[i+3]];
						if(sum1>sum2)
							pos[i+1]=-1;
						else
							pos[i]=-1;
					}

					else if(!possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]) && !possible(pos[i+2],pos[i+3])){
						if(a[pos[i]]>=a[pos[i+1]] && a[pos[i+2]]>=a[pos[i+3]])
							pos[i+1]=-1, pos[i+3]=-1;
						else if(a[pos[i]]<a[pos[i+1]] && a[pos[i+2]]>=a[pos[i+3]])
							pos[i]=-1, pos[i+3]=-1;
						else if(a[pos[i]]>=a[pos[i+1]] && a[pos[i+2]]<a[pos[i+3]])
							pos[i+1]=-1, pos[i+2]=-1;
						else
							pos[i]=-1, pos[i+2]=-1;
					}

					else if(!possible(pos[i],pos[i+1]) && !possible(pos[i+1],pos[i+2]) && possible(pos[i+2],pos[i+3])){
						sum1=a[pos[i]] + a[pos[i+2]] + a[pos[i+3]];
						sum2=a[pos[i+1]] + a[pos[i+3]];
						if(sum1>sum2){
							pos[i+1]=-1;
						}
						else{
							pos[i]=-1; pos[i+2]=-1;
						}

					}

					else{
						sum1=a[pos[i]]+max(a[pos[i+2]],a[pos[i+3]]);
						sum2=a[pos[i+1]]+a[pos[i+3]];
						if(sum1>sum2){
							pos[i+1]=-1;
							if(a[pos[i+2]]>a[pos[i+3]])
								pos[i+3]=-1;
							else
								pos[i+2]=-1;
						}
						else{
							pos[i]=-1;
							pos[i+2]=-1;
						}
					}
					i+=3;
				}
			}

			else if(i+2<size){
				if(pos[i+1]-pos[i]==2 && pos[i+2]-pos[i+1]==2){
					if(possible(pos[i],pos[i+1]) && possible(pos[i+1],pos[i+2]))
						pos[i+1]=-1;
					i+=2;
				}
			}
		}

		sort(pos,pos+size,comparea);
		for(i=size-1;i>=0;i--){
			if(pos[i]==-1)
				continue;
			else if(pos[i]==0 && pos[i]+1<n && a[pos[i]]>0){
				if(a[pos[i]+1] > a[pos[i]]){
					a[pos[i]+1]=a[pos[i]+1]-a[pos[i]];
					a[pos[i]]=-a[pos[i]];
					b[pos[i]]=-b[pos[i]];
				}
			}
			else if(pos[i]==n-1 && pos[i]-1>=0 && a[pos[i]]>0){
				if(a[pos[i]-1]>a[pos[i]]){
					a[pos[i]-1]=a[pos[i]-1]-a[pos[i]];
					a[pos[i]]=-a[pos[i]];
					b[pos[i]]=-b[pos[i]];
				}
			}
			else if(a[pos[i]]>0){
				if(a[pos[i]+1]>a[pos[i]] && a[pos[i]-1]>a[pos[i]]){
					a[pos[i]+1]=a[pos[i]+1]-a[pos[i]];
					a[pos[i]-1]=a[pos[i]-1]-a[pos[i]];
					a[pos[i]]=-a[pos[i]];
					b[pos[i]]=-b[pos[i]];
				}
			}
		}
		
}

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n,i;
		cin>>n;
		lli b[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
	
		functa(b,n);
		
		for(i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}		
}

