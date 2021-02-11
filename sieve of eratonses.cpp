#include<bits/stdc++.h>
using namespace std;



void sieveprime(char sieve[])
{
    sieve[1]=1;
    int till=20;
    for(int i=4;i<=till;i+=2)
        sieve[i]=1;
    int limit=sqrt(till)+1;
    for(int i=3;i<=limit;i+=2)
    {
        if(!sieve[i])
            for(int j=i*i; j<=till;j+=(i*2))
                sieve[j]=1;

    }
}

int main()
{
    char sieve[1004];
    memset(sieve,0,sizeof(sieve));
   int  p[20+1];
   int k,i;

    sieveprime(sieve);
    for(i=3,k=0;i<=20;i++)
    {
        if(!sieve[i])
        {
            if(i+(i+1)==20)
            {
                printf("%d%d",i,i+1);
                break;
            }
    }
    }

}
