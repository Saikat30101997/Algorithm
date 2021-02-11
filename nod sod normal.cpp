#include <bits/stdc++.h>

using namespace std;

int NOD(int n)
{
    int limit = sqrt(n+1);
    int res = 0;
    for(int i=1; i<=limit; i++)
        if(!(n%i))
            res += 2;
    if(limit*limit==n) res--;
    return res;
}

int SOD(int n)
{
    int limit = sqrt(n+1);
    int res = 0;
    for(int i=1; i<=limit; i++)
        if(!(n%i))
        {
            res += i;
            res += (n/i);
        }
    if(limit*limit==n) res -= limit;
    return res;
}
int main()
{
    int ans, n;
    scanf("%d", &n);
    ans = NOD(n);
    printf("%d\n", ans);
    return 0;
}
