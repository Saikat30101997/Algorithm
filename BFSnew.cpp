#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define mp              make_pair
#define db              double
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define vi              vector< int >
#define vl              vector< ll >
#define vii             vector<vector< int > >
#define vll             vector<vector< ll > >
#define DBG             pf("HI\n")
#define MOD             1000000007
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

 vector<int>graph[100005];

 int vis[100005],dis[100005];
 void BFS(int start)
 {
     queue<int>q;
     q.push(start);
     vis[start]=1;
     dis[start]=0;
     int x;
     while(!q.empty())
     {
         int u = q.front();
         q.pop();
         x = dis[u];
         for(int i=0;i<graph[u].size();i++)
         {
            int  v=graph[u][i];
             if(!vis[v])
             {
                 vis[v]=1;
                 dis[v]=x+1;
                 q.push(v);

             }
         }
     }
 }

 int main()
 {
     int n,e,u,v,x;
     cin>>n>>e;
     for(int i=1;i<=e;i++)
     {
         cin>>u>>v;
         graph[u].pb(v);
         graph[v].pb(u);
     }
     ///BFS(1);
     dis[1]=0;
     for(int i=1;i<=n;i++)
     {
         if(!vis[i])
              BFS(i);
     }

     for(int i=1;i<=n;i++)
        cout<<vis[i]<<"\t";
        cout<<endl;

        for(int i=1;i<=n;i++) cout<<dis[i]<<"\t";
 }

