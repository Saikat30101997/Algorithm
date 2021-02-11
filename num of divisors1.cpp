#include<bits/stdc++.h>
using namespace std;

void NOD(int n)
{
    int limit=sqrt(n+1);
    int cnt=0;
    for(int i=1;i<=limit;i++)
    {
        if(n%i==0)
            cnt+=2;
    }
    if(limit*limit==n)
        cnt--;
        cout<<cnt;
}
int main()
{
    int n;
    cin>>n;
    NOD(n);
    return 0;
}
