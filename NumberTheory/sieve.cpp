#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve(){
    int n = 1000000;
    for(int i = 0; i<=n; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i<=n; i++){
        if(prime[i]){
            for(int j = i*i; j<=n; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sieve();
    for(int i = 2; i<1000; i++) {
        if(prime[i] == 1)
            cout<<i<<" ";
     }
}
