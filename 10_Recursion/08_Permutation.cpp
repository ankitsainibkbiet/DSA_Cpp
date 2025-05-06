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

void stringPermutation(string& str, int n, vector<string>& ans, int index){
    if(index == n){
        ans.push_back(str);
        return;
    }

    for(int i=index; i<n; i++){
        swap(str[index], str[i]);
        stringPermutation(str, n, ans, index+1);
        swap(str[index], str[i]);
    }
}

int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    vector<vector<int>> ans;
    // permutation(nums, ans, n, 0);
    // for(auto val: ans){
    //     for(auto key: val){
    //         cout<<key<<" ";
    //     }
    //     cout<<endl;
    // }

    string str = "abc";
    int n2 = str.length();
    vector<string> ans2;
    stringPermutation(str, n2, ans2, 0);
    for(auto val: ans2){
        cout<<val<<endl;
    }

    return 0;
}