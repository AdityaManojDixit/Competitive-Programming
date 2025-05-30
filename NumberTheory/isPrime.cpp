#include<bits/stdc++.h>
using namespace std;


//Prime numbers are divisible only by themselves and 1.
//TC : O(N)
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

//O(sqrt(N))
bool isPrimeRootMethod(int n){
    if(n ==1) return false;
    for(int i = 2; i*i<= n; i++){
        if(n %i == 0) return false;
    }
    return true;
}
 

int main(){
  
  return 0;
}