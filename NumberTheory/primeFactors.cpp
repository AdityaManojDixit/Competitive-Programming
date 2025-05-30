#include<bits/stdc++.h>
using namespace std;

//Brute Force
//TC (Worst Case : Input is prime) = O(N)
//TC = 10 * log(i,N)
//SC = O(1)
void factorsBrute(int n){
  for(int i = 2; i<=n; i++){

    //Worst Case : 10
    if(n%i == 0){
      int count = 0;

      while(n%i == 0){
        //log(i,N) 
        count++;
        n = n/i;
      }
      cout<<i<<"^"<<count<<" ";
    }
  }
}

//Optimized
void factorsOptimal(int n){
    map<int,int> mp;
  for(int i = 2; i<=n; i++){
    int count = 0;
    while(n%i == 0){
      count++;
      n= n /i;
    }
    if(count) mp[i] = count;
  }
  map<int,int> :: iterator it = mp.begin();
  while(it != mp.end()){
    cout << "factor: " << it->first << ", power: " << it->second << endl;
    ++it;
  }
}




int main(){
  factorsBrute(100);
  return 0;
}