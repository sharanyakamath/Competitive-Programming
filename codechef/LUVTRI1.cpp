#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll m=1e9+7;
 
class point
{
    public:
    ll x;
    ll y;
};
 
 
ll g(point p,point q)
{
    // Check if line parallel to axes
    if (p.x==q.x)
        return abs(p.y - q.y) - 1;
    if (p.y == q.y)
        return abs(p.x-q.x) - 1;
 
    return __gcd(abs(p.x-q.x),abs(p.y-q.y))-1;
}
 
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {ll x1,y1,x2,y2,x3,y3;
    point a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a.x=x1;a.y=y1;
    b.x=x2;b.y=y2;
    c.x=x3;c.y=y3;
    ll q=g(a,b);
    //cout<<q;
    ll r=g(b,c);
    ll s=g(c,a);
    ll ans=((q%m)*(r%m)*(s%m))%m;
    cout<<ans<<"\n";
    }
}