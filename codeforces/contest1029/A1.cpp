#include <iostream>

using namespace std;

int n, k;
char s[100];

int verif(int l) {
    int a=0;
    int b=n-l;
    while(a<l) {
        if(s[a]!=s[b])
            return 0;
        else
            a++, b++;
    }
    return 1;
}

int main()
{
    int sol=0;
    cin>>n>>k;
    cin.get();
    cin>>s;
    for(int l=1; l<n; l++)
        if(verif(l))
        sol=l;
    int ok=1;
    for(int i=0; i<n-1 && ok==1; i++)
        if(s[i]!=s[i+1])
        ok=0;
    if(ok==1) {
        cout<<s;
        for(int i=1; i<k; i++)
            cout<<s[0];
        return 0;
    }
    cout<<s;
    for(int i=2; i<=k; i++)
        cout<<(s+sol);
    //for(int i=0; i<sol; i++) cout<<s[i];
    return 0;
}