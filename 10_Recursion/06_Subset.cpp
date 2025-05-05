#include<iostream>
#include<vector>
using namespace std;

void bitManupulationSubset(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    vector<vector<int>> ans;

    for(int mask=0; mask < (1<<n); mask++){  // total number of sebsets
        vector<int> subset;
        for(int j=0; j<n; j++){  // what is value at each subset
            if(mask & (1<<j)){  // it find the one's bit in mask by AND of 001(2^0), 010(2^1), 100(2^2)     which are (1<<i)
                subset.push_back(nums[j]);
            }
        }
        ans.push_back(subset);
    }

    for(auto val : ans){
        cout<<"{ ";
        for(auto key : val){
            cout<<key<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}

int main(){
    bitManupulationSubset();
    return 0;
}