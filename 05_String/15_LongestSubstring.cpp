#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "bvbf";
    vector<int> freq(256, -1);
    int maxLength = 0, left = 0, right = 0;
   
    while(right < s.length()){
        if(freq[s[right]] != -1){
            if(freq[s[right]] >= left){
                left = freq[s[right]] + 1;
            }
        }
        int length = right - left + 1;
        maxLength = max(maxLength, length);
        freq[s[right]] = right;
        right++;
    }

    cout<<maxLength;

    return 0;
}