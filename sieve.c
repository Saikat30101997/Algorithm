#include<bits/stdc++.h>

using namespace std;

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
}

int main()
{
    char seive[1005];
    memset(seive, 0, sizeof(seive));

    seivePrime(seive);

    for(int i=2; i<=1000; i++)
        if(!seive[i])
            printf("%d ", i);
    return 0;
}
DATEAPRIL 17, 2017
