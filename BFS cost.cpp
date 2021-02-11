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
int dis[100005],vis[100005];
vector<int>costv[100005];
int BFS(int source,int destination)
{
     for(int i=0;i<100005;i++) dis[i]=100000000;
     queue<int>q;
     q.push(source);
     dis[source]=0;
     int u,v,ucost,vcost;
     while(!q.empty())
     {
         u=q.front();
         q.pop();
         ucost=dis[u];
         for(int i=0;i<graph[u].size();i++)
         {
             v=graph[u][i];
             vcost=costv[u][i]+ucost;
             if(dis[v]>vcost) dis[v]=vcost;
             q.push(v);
         }
     }
     return dis[destination];
}


int main()
{
    int n,e,u,v,cost;
    sc("%d\n",&n);
    sc("%d\n",&e);
    for(int i=1;i<=e;i++)
    {
        sc("%d %d %d",&u,&v,&cost);
        graph[u].push_back(v);
        costv[u].push_back(cost);
    }

    pf("cost with source to destination: %d\n",BFS(1,n));
}
