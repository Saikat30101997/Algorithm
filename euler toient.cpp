#include <bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
   if(a%b==0) return b;
   return gcd(b,a%b);
}

// A simple method to evaluate Euler Totient Function
int phi(unsigned int n)
{
    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1){
            result++;
        }
    return result;
}

int main()
{
    int p;
    cin>>p;
    cout<<phi(p);
    return 0;
}

