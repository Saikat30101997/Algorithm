#include<bits/stdc++.h>
using namespace std;

void primefactors(int n)
{
    vector<int>p;
    while(n%2==0)
    {
        p.push_back(2);
        n/=2;
    }
    for(int i=3;i<=sqrt(n+1);i+=2)
    {
        while(n%i==0)
        {
            p.push_back(i);
            n/=i;
        }
    }
    if(n>2)
    {
        p.push_back(n);
    }
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    primefactors(n);
    return 0;
}
