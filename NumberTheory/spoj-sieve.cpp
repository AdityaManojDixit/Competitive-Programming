#include <iostream>
#include <vector>
using namespace std;

bool prime[90000001];  
vector<int> sieve() {
    int n = 90000000;
    vector<int> ans;  
    for (int i = 0; i <= n; i++) prime[i] = true;  
    prime[0] = prime[1] = false;  

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false; 
            }
        }
    }

   
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            ans.push_back(i);
        }
    }

    return ans;  
}

int main() {
    int t;
    cin >> t;  
    vector<int> ans = sieve();  
    while (t > 0) {
        int k;
        cin >> k;  

        if (k <= ans.size()) {
            cout << ans[k - 1] << endl;  
        } 

        t--;
    }

    return 0;
}
