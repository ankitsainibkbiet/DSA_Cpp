#include<iostream>
#include<algorithm>
using namespace std;

void reverseWord(){
    string str = "      sky is blue        and amazing ";
    string result = "";
    int n = str.length();

    reverse(str.begin(), str.end());

    for(int i=0; i<n; i++){ // this i++ is used to skip the space 
        string word = "";
        while(str[i] != ' ' && i<n){ // for single character always use (' ') the (" ") is used for string
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        result += " " + word;
    }

    while(result.find("  ") < n){  // to remove extra spaces
        int index = result.find("  ");
        result.erase(index,1);
    }
    if(result.find(" ") == 0){
        result.erase(0,1);
    }else if(result.find(" ") == n-1){
        result.erase(n-1,1);
    }

    cout<<result;
}

int main(){
    reverseWord();
    return 0;
}