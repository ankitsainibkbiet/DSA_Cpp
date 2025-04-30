#include<iostream>
#include<vector>
using namespace std;

int lengthOfLastWord(string s) {
    int index = 0, ans = 0, n = s.length();

    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            index = i;
        }
    }

    if(index == n-1){  // when there is a space in ending
        for(int i=index; i>=0; i--){
            if(s[i] != ' '){
                index = i;
                break;
            }
        }
        for(int i=index; i>=0; i--){
            if(s[i] == ' '){
                break;
            }
            ans++;
        }
        return ans;
    }

    for(int i=index; i<n; i++){
        if(s[i] == ' ') continue; 
        ans++;
    }

    return ans;
}

int main() {
    string s = " EINSTEIN THE GREAT ANKIT                    ";
    int result = lengthOfLastWord(s);
    cout<<result;
    return 0;
}