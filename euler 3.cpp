#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll power(ll a,ll b)
{
    ll res=1;
    while(b--)
    {
        res*=a;
    }
    return res;
}


ll prime (ll n)
{
    ll i;
    for(i=2;i*i<=n;i++)   
    {
        if(n%i==0)return 1;
          
    }
    return 0;
}

void phi(long long int n)
{
        ll i,mul=1,holder,fre=0;
        if(prime(n)==0)
        mul=n-1;
        else
           
        {
                    for(i=2; i*i<=n; i++)
                   
    {
                    if(n%i==0)
                            {
                                while(n%i==0)
                                    {
                                        n=n/i;
                                        holder=i;
                                        fre++;

                                   
                }
                                mul*=(power(holder,fre-1)*(holder-1));
                                fre=0;
                           
            }
                   
        }
            if(n!=1)
{

                    mul*=(n-1);
               
    }

       
    }
        cout << mul << endl;
}

int main()
{
        long long int n;
        scanf("%lld",&n);
        phi(n);
        return 0;
}
