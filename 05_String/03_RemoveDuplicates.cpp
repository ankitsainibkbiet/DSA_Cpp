#include<iostream>
using namespace std;

void removeDuplicatesInplace(){
    string str = "abbccddax";
    int n = str.length(), start = 0;

    while(start < n){
        if(str[start] == str[start+1]){
            str.erase(start,2); // remove 2 positions starting from i
            start = max(0, start-1); // step back to recheck for new adjacent duplicates
        }else{ 
            start++;
        }
    }

    cout<<str;
}

void removeDuplicatesOpti(){
    string str = "abbaca";
    string result;

    for(char ch : str){
        if(result.empty()){
            result.push_back(ch);
        }else if(result.back() == ch){
            result.pop_back();
        }else{
            result.push_back(ch);
        }
    }

    cout<<result;
}

int main(){
    // removeDuplicatesInplace();
    removeDuplicatesOpti();
    return 0;
}