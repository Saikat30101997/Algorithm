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

#define MAX 1000006

bool prime[MAX];
vector <ll> v;

void Sieve ()
{
    ll i,j;

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

void segmentedSieve(ll L, ll R)
{
    bool isPrime[R-L+1];
    for(int i=0 ; i<=R-L+1 ; i++)
        isPrime[i]=true;


    if(L==1)
        isPrime[0]=false;
    for(int i=0 ; v[i]*v[i]<=R ; i++)
    {
        ll curPrime=v[i];
        ll base=curPrime*curPrime;
        if(base<L)
        {
            base=((L+curPrime-1)/curPrime)*curPrime;
        }
        for(ll j=base ; j<=R ; j+=curPrime)
            isPrime[j-L]=false;
    }
    ll cnt = 0;
    for(int i=0 ; i<=R-L ; i++)
    {
        if(isPrime[i]==true)
            {
                cout<<L+i<<' ';
            }
    }
    //cout<<cnt<<endl;
}


int main()
{
    Sieve();
    ll n = 3,m=11;
    segmentedSieve(n,m);
}
