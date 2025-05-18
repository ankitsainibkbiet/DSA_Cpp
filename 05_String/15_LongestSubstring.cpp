#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "bvbf";
    int maxLength = 0, left = 0, right = 0;
    vector<int> freq(256, 0);  // it can handle anything 

    while(right<s.length()){
        if(freq[s[right]] == 0){
            freq[s[right]]++;
            maxLength = max(maxLength, right-left+1);
            right++;
        }else{
            freq[s[left]]--;
            left++;
        }
    }

    cout<<maxLength;

    return 0;
}