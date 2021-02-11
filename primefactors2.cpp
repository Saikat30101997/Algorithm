#include<bits/stdc++.h>
using namespace std;


int prime[100000];
int List[1000000];  // saves the List
int listSize;   // saves the size of List

void primeFactorize( int n ) {
    listSize = 0;   // Initially the List is empty, we denote that size = 0
    int sqrtN = int( sqrt(n) ); // find the sqrt of the number
    for( int i = 0; prime[i] <= sqrtN; i++ ) { // we check up to the sqrt
        if( n % prime[i] == 0 ) { // n is multiple of prime[i]
            // So, we continue dividing n by prime[i] as long as possible
            while( n % prime[i] == 0 ) {
                n /= prime[i]; // we have divided n by prime[i]
                List[listSize] = prime[i]; // added the ith prime in the list
                listSize++; // added a prime, so, size should be increased
            }
            // we can add some optimization by updating sqrtN here, since n
            // is decreased. think why it's important and how it can be added
        }
    }
    if( n > 1 ) {
        // n is greater than 1, so we are sure that this n is a prime
        List[listSize] = n; // added n (the prime) in the list
        listSize++; // increased the size of the list
    }
}
int main() {
    primeFactorize();
    cin>>n
    for( int i = 0; i < listSize; i++ ) // traverse the List array
        printf("%d ", List[i]);
    return 0;
}
