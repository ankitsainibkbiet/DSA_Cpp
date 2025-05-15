#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> vec1 = {4, 1, 2};
    vector<int> vec2 = {1, 3, 4, 2};
    vector<int> ans;
    unordered_map<int, int> m;
    stack<int> s;

    for(int i=vec2.size()-1; i>=0; i--){
        while(!s.empty() && s.top() <= vec2[i]){
            s.pop();
        }
        if(s.empty()){
            m[vec2[i]] = -1;  // to preserve the order use i-th index
        }else{
            m[vec2[i]] = s.top();
        }
        s.push(vec2[i]);
    }

    for(int i=0; i<vec1.size(); i++){
        ans.push_back(m[vec1[i]]);
    }

    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}