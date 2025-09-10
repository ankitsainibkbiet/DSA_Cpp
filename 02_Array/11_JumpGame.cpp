#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int reach = 0;

        for(int i=0; i<nums.size(); i++){
            if(i > maxReach) return false;
            reach = i + nums[i];
            maxReach = max(reach, maxReach);
            if(maxReach >= nums.size()-1) return true;
        }

        return true;
    }
};