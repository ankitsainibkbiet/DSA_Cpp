#include<iostream>
#include<vector>
using namespace std;

bool isValidAnagram(vector<int> freqS1, vector<int> freqS2){
    for(int i=0; i<26; i++){
        if(freqS1[i] != freqS2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "ecar", s2 = "race";

    vector<int> freqS1(26,0);
    for(int i=0; i<s1.length(); i++){
        freqS1[s1[i] - 'a']++;
    }

    vector<int> freqS2(26,0);
    for(int i=0; i<s2.length(); i++){
        freqS2[s2[i] - 'a']++;
    }

    if(isValidAnagram(freqS1, freqS2)){
        cout<<"Valid Anagram";
    }else{
        cout<<"Invalid Anagram";
    }

    return 0;
}