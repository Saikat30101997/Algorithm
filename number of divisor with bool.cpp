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

#define MAX 2000

bool prime[MAX+10];
vector <int> v;

void Sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;
    v.pb(2);

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2){
        if (prime[i]==false){
           for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=3; i<=MAX; i+=2)
        if (prime[i]==false)
            v.pb(i);
}


int NOD(int n)
{
    int p = 0,res = 1;
    int till = sqrt(n+1);


    for(int i=0;v[i]<=till;i++)
    {
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                p++;
            }
        }
        till = sqrt(n+1);
        res*=(p+1);
        p = 0;
    }

    if(n>1) res*=2;
    return res;


}


int main()
{
    Sieve();
    int n;
    cin>>n;
   int k = NOD(n);
 //  for(int i=0;)
    cout<<k;
}
