#include<bits/stdc++.h>
using namespace std;

int sz = 1000;
int binary(int a[],int key)
{
    int mid;
    int low = 0;
    int high = sz-1;
    mid = (low+high)/2;
    int index;
    while(low<=high)
    {
        if(a[mid]==key)
        {
            index = mid;
            high = mid-1;
        }
        else if(key<a[mid])
        {
            high = mid-1;
        }
        else if(key>a[mid])
        {
           low = mid+1;
        }
        mid = (low+high)/2;
    }
    return index;
}


int main()
{
    //int binary(int a[],int);
    int p,k;
    cin>>p>>k;
    int a[sz+5];
    for(int i=0;i<p;i++)
        cin>>a[i];

   int o = binary(a,k);
    cout<<o+1<<endl;
}
