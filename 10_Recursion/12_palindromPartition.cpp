#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalindrom(string part){
    string check = part;
    reverse(check.begin(), check.end());
    if(check == part) return true;
    return false;
}

void palindromPartition(string s, vector<vector<string>>& ans,  vector<string>& temp){
    if(s.length() == 0){
        ans.push_back(temp);
        return;
    }

    for(int i=0; i<s.length(); i++){
        string part = s.substr(0, i+1);
        if(isPalindrom(part)){
            temp.push_back(part);
            palindromPartition(s.substr(i+1), ans, temp);
            temp.pop_back();
        }
    }
}

int main(){
    string s = "aab";
    vector<vector<string>> ans;
    vector<string> temp;

    palindromPartition(s, ans, temp);

    for(auto val : ans){
        for(auto key : val){
            cout<<key<<" ";
        }
        cout<<endl;
    }

    return 0;
}