#include<bits/stdc++.h>
#define MOD 10
#define ll    long long int
using namespace std;

int a,p,m;

ll bigmod(ll a,ll p)
{
    ll q;
    if(p==0)
        return 1;
     if(p%2==0)
    {
        q = bigmod(a,p/2);
        q=((q%MOD)*(q%MOD))%MOD;
    }
    if(p%2==1)
    {
        q = bigmod(a,p-1);
        q = ((q%MOD)*(a%MOD))%MOD;

    }
    return q;
}


int main()
{
    int x;
    cin>>a>>p;
    x = bigmod(a,p);
    cout<<x;
    return 0;




}

