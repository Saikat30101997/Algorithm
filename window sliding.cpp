#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   int arr[n],sum[n];

   for(int i=1;i<=n;i++) cin>>arr[i];
   sum[0] = 0;
   sum[1] = arr[1];
   for(int i=2;i<=n;i++)
   {
       sum[i] = sum[i-1]+arr[i];
       //cout<<sum[i]<<endl;
   }

   for(int i=0;i<=n;i++) cout<<sum[i]<<' ';
   int ans = 0,diff=0;
   for(int i=0;i<=n-k;i++)
   {
       diff = sum[i+k] - sum[i];
       ans = max(ans,diff);
   }
   cout<<ans<<endl;
}
