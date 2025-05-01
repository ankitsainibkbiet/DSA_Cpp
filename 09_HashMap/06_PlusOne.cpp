#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> withNine(vector<int> vec, vector<int> ans, int n){
    if(n == 1){
        ans.push_back(1);
        ans.push_back(0);
        return ans;
    }

    for(int i=n-1; i>=0; i--){
        if(vec[i] == 9){
            ans.push_back(0);
        }else if(vec[i] != 9 && vec[i+1] == 9){
            ans.push_back(vec[i]+1);
        }
    }

    bool insertOne = false;
    if(vec[0] == 9) insertOne = true;

    if(insertOne){
        ans.push_back(1);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

vector<int> withoutNine(vector<int> vec, vector<int> ans, int n){
    for(int i=0; i<n; i++){
        if(i != n-1){
            ans.push_back(vec[i]);
        }else{
            ans.push_back(vec[n-1] + 1);
        }
    }

    return ans;
}

int main() {
    vector<int> vec = {1,9,9,1};
    vector<int> ans;
    int n = vec.size();

    if(vec[n-1] == 9){
        ans = withNine(vec, ans, n);
    }else{
        ans = withoutNine(vec, ans, n);
    }

    for(int val : ans){
        cout<<val;
    }

    return 0;
}