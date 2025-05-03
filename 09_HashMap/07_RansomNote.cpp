#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>freqR, vector<int>freqM){
    for(int i=0; i<26; i++){
        if(freqR[i] > freqM[i]) return false;
    }
    return true;
}

bool canConstruct(string ransomNote, string magazine) {
    vector<int> freqR(26,0);
    for(int i=0; i<ransomNote.length(); i++){
        freqR[ransomNote[i] - 'a']++;
    }

    vector<int> freqM(26,0);
    for(int i=0; i<magazine.length(); i++){
        freqM[magazine[i] - 'a']++;
    }

    if(isValid(freqR, freqM)) return true;
    return false;
}

int main() {
    string r = "aa";
    string m = "aab";
    cout<<canConstruct(r, m);
    return 0;
}