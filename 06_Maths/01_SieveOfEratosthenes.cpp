#include<iostream>
#include<vector>
using namespace std;

void sieveOfEratosthenes(){
    int n = 50, ans = 0;
    vector<bool> vec(n, true);

    for(int i=2; i<n; i++){
        if(vec[i]){
            ans++;
            for(long long j = (long long)i*i; j<n; j+=i){   // long long for overflow or simply use (i*2 )
                vec[j] = false;
            }
        }
    }

    cout<<ans;
}

int main(){
    sieveOfEratosthenes();
    return 0;
}