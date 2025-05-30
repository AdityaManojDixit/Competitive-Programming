#include<bits/stdc++.h>

using namespace std;


void primeFact(int n){
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i==0)
                cnt++, n/=i;
            
        }
    }
}

int main(){
  
  return 0;
}