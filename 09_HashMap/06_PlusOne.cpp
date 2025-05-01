#include<iostream>
#include<vector>
using namespace std;

vector<int> withNine(vector<int> vec, vector<int> ans, int n, int lastDigit){
    if(n == 1){
        ans.push_back(1);
        ans.push_back(0);
        return ans;
    }
}

vector<int> withoutNine(vector<int> vec, vector<int> ans, int n, int lastDigit){
    for(int i=0; i<n; i++){
        if(i != n-1){
            ans.push_back(vec[i]);
        }else{
            lastDigit = vec[n-1] + 1;
            ans.push_back(lastDigit);
        }
    }

    return ans;
}

int main() {
    vector<int> vec = {9};
    vector<int> ans;
    int n = vec.size(), lastDigit;

    if(vec[n-1] == 9){
        ans = withNine(vec, ans, n, lastDigit);
    }else{
        ans = withoutNine(vec, ans, n, lastDigit);
    }

    for(int val : ans){
        cout<<val;
    }

    return 0;
}