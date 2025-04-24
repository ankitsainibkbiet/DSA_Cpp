#include<iostream>
#include<vector>
using namespace std;

bool isValidFreq(vector<int> Freq, vector<int> windowFreq){
    for(int i=0; i<26; i++){
        if(Freq[i] != windowFreq[i]){
            return false;
        }
    }
    return true;
}

void permutationInString(){
    string s1 = "nhd";
    string s2 = "hdnvjxhdncj";

    vector<int> freq(26,0);  // only small alphabates are allowed
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        freq[index]++;
    }

    for(int i=0; i<s2.length(); i++){  
        int windowIndex = 0, index = i, windowSize = s1.length();
        vector<int> windowFreq(26,0); // reinitialize the windowFreq again and again 

        while(windowIndex < windowSize && index < s2.length()){  // inc freq of char of different window
            windowFreq[s2[index] - 'a']++;
            windowIndex++;
            index++;
        }

        if(isValidFreq(freq, windowFreq)){
            cout<<"Permutation found";
            return;
        }
    }

    cout<<"Permutation not found";
    return;
}

int main(){
    permutationInString();
    return 0;
}