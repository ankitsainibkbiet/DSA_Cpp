#include<iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string s){
        string str;
        for(char ch: s){
            str += tolower(ch);
        }
        return str;
    }

    bool halvesAreAlike(string s) {
        string Str = toLowerCase(s);
        int n = Str.length();
        int size1 = n/2, size2 = n/2, count1 = 0, count2 = 0;

        for(int i=0; i<size1; i++){
            if(Str[i]=='a' || Str[i]=='e' || Str[i]=='i' || Str[i]=='o' || Str[i]=='u') count1++;
        }

        for(int i=size2; i<n; i++){
            if(Str[i]=='a' || Str[i]=='e' || Str[i]=='i' || Str[i]=='o' || Str[i]=='u') count2++;
        }

        if(count1 == count2) return true;

        return false;
    }
};

int main(){
    Solution s1;
    cout<<s1.halvesAreAlike("Ankit");
    return 0;
}