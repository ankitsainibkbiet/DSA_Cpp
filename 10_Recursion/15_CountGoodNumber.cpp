#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution1 {
public:
    long long binaryLoop(long long number, long long power){
        long long ans = 1;
        long long MOD = 1000000007;
        long long powerCounter = number;

        while(power > 0){
            long long digit = power%2;
            if(digit){
                ans = (ans * powerCounter) % MOD;;
            }
            powerCounter = (powerCounter * powerCounter) % MOD;
            power /= 2; 
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long MOD = 1000000007;
        long long evenNumber = (n+1)/2;
        long long oddNumber = (n)/2;

        long long ans = (binaryLoop(5, evenNumber) * binaryLoop(4, oddNumber)) % MOD;

        return (int)ans;
    }
};

class Solution2 {
public:
    int countGoodNumbers(long long n) {
        long long MOD = pow(10,9) + 7;
        long long ans = 1;

        for(int i=0; i<n; i++){
            if(!(i%2)){
                ans = (ans*5) % MOD;
            }else{
                ans = (ans*4) % MOD;
            }
        }

        return ans;
    }
};

class Solution3 {
public:
    vector<int> makeNum(int n, int length){
        vector<int> temp;
        if(n == 0) temp.push_back(0);
        while(n > 0){
            int digit = n % 10;
            temp.push_back(digit);
            n /= 10;
        }
        for(int i=temp.size(); i<length; i++){
            temp.push_back(0);
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }

    bool check(vector<int>& num, int i){
        if(i >= num.size()) return true;
        if(i%2 == 0){
            if(num[i]%2 != 0) return false;
        }else{
            if(num[i] != 2 && num[i] != 3 && num[i] != 5 && num[i] != 7) return false;
        }
        return check(num, i+1);
    }

    int countGoodNumbers(long long n) {
        long long totalCount = pow(10, n) - 1;
        int ans = 0, modulo = (pow(10, 9) + 1);
        
        for(int i=0; i<=totalCount; i++){
            vector<int> num = makeNum(i, n);
            if(check(num, 0)) ans++;
        }

        return ans % modulo;
    }
};