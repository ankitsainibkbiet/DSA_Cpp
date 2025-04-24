#include<iostream>
#include<algorithm>
using namespace std;

void reverseWords(){
    string str = "     sky  is      blue ";
    string result = "";
    int n = str.length();

    for(int i=0; i<n; i++){
        string word = "";
        while(str[i] != ' ' && i<n){
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0){ // best way to remove space 
            result += " " + word;
        }
    }

    cout<<result.substr(1); // this give a substring starting from position 1
}

int main(){
    reverseWords();
    return 0;
}