#include<bits/stdc++.h>

using namespace std;
const int p=1e5;
int q[p+6];


void seivePrime(char seive[])
{
    seive[1]=1;
    int till=1000;
    for(int i=4; i<=till; i+=2)
        seive[i] = 1;
    int limit = sqrt(till)+1;
    for(int i=3; i<=limit; i+=2)
    {
        if(!seive[i])
            for(int j=i*i; j<=till; j+=(i*2))
                seive[j] = 1;
    }
    int t=0;
    for(int i=0;i<p;i++)
    {
        p[t++]=sieve[i];
    }
}

int main()
{
    int n;
    cin>>n;
    char seive[q+6];
    memset(seive, 0, sizeof(seive));

    seivePrime(seive);
   /* for(int i=2; i<=1e7; i++)
        if(!seive[i])
            printf("%d ", i);*/
     for(int i=0;i<n;i++)
                cout<<q[i];

    return 0;
}


