#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,5,5};
    unordered_map<int, int> m;
    for(int val  : nums){
        m[val]++;
        if(m[val] >= 2){
            cout<<val;
        }
    }
    return 0;
}