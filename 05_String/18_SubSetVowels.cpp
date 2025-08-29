#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void check(vector<bool> freq1,  vector<bool> freq2, int& count){
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]){
            return;
        }
    }
    count++;
    return;
}

int main(){
    string str = "eiou";

    if(str.length() < 5) return 0;

    vector<string> ans;
    vector<bool> freq1(26, false);
    int count = 0;

    freq1['a' - 'a'] = true;
    freq1['e' - 'a'] = true;
    freq1['i' - 'a'] = true;
    freq1['o' - 'a'] = true;
    freq1['u' - 'a'] = true;

    for(int i=0; i<=str.length()-5; i++){
        string subStr = "";
        for(int j=i; j<str.length(); j++){
            subStr += str[j];
            if(subStr.length() >= 5){
                ans.push_back(subStr);
            }
        }
    }

    for(auto ch: ans){
        vector<bool> freq2(26, false);
        for(auto i:ch){
            freq2[i - 'a'] = true;
        }
        check(freq1, freq2, count);
    }

    cout<<count;

    return 0;
}