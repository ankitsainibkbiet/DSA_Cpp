#include<iostream>
#include<vector>
using namespace std;

bool isSubsequence(string s, string t) {
    int sp = 0, tp = 0;
    while(sp < s.length() && tp < t.length()){
        if(s[sp] == t[tp]){
            sp++;
        }
        tp++;
    }
    return sp == s.length();
}

int main() {
    string s = "abc";
    string t = "ahbgdc";
    isSubsequence(s, t);
    return 0;
}