#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n,h,a,b,q;
	cin>>n>>h>>a>>b>>q;
	while(q--){
		long long int ta,fa,tb,fb,ans=0,floor;
		cin>>ta>>fa>>tb>>fb;

		if(ta==tb)
			ans=abs(fa-fb);

		else{
			ans+=abs(ta-tb);

			if(fa>=a && fa<=b)
				floor=fa;

			else{
				ans+=min(abs(fa-a),abs(fa-b));

				if(abs(fa-a)>abs(fa-b))
					floor=b;

				else if(abs(fa-a)<abs(fa-b))
					floor=a;

				else{
					if(abs(fb-a)>abs(fb-b))
						floor=b;
					else 
						floor=a;
				}
			}

			ans+=abs(fb-floor);
		}
		cout<<ans<<endl;
	}
}