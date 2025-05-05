#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subset(vector<int> &nums, vector<int> &tempSubset, vector<vector<int>> &ans, int n, int i){
    if(i == n){
        ans.push_back(tempSubset);
        return;
    }

    tempSubset.push_back(nums[i]);
    subset(nums, tempSubset, ans, n, i+1);

    tempSubset.pop_back();
    int index = i+1;
    while(index < n && nums[index] == nums[index-1]) index++;
    subset(nums, tempSubset, ans, n, index);
}

int main(){
    vector<int> nums = {1,5,3,3};
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> tempSubset;

    sort(nums.begin(), nums.end());

    subset(nums, tempSubset, ans, n, 0);

    for(auto val : ans){
        cout<<"{ ";
        for(auto key : val){
            cout<<key<<" ";
        }
        cout<<"}";
        cout<<endl;
    }

    return 0;
}