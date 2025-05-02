#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> numbers = {0,2,7,11,15};
    vector<int> ans;
    int n = numbers.size(), start = 0, end = n-1, target = 9;

    while(start < end){
        int sum = 0;
        sum = numbers[start] + numbers[end];
        if(sum < target){
            start++;
        }else if(sum > target){
            end--;
        }else{
            ans.push_back(start+1);
            ans.push_back(end+1);
            break;
        }
    }

    for(int val:ans){
        cout<<val<<" ";
    }

    return 0;
}