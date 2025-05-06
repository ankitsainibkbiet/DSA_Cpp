#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>& nums, vector<vector<int>>& ans, int n, int index){
    if(index == n){
        ans.push_back(nums);
        return;
    }

    for(int i=index; i<n; i++){
        swap(nums[index], nums[i]);
        permutation(nums, ans, n, index+1);
        swap(nums[index], nums[i]);
    }
}

int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    vector<vector<int>> ans;

    permutation(nums, ans, n, 0);

    for(auto val: ans){
        for(auto key: val){
            cout<<key<<" ";
        }
        cout<<endl;
    }
    return 0;
}