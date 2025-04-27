#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s = {1, 2, 55, 8, 45};  // store data in random order

    s.insert(100); // O(1), in avg case
    
    for(int val : s){
        cout<<val<<" ";
    }
    cout<<endl;
    
    if(s.find(1) == s.end()){
        cout<<"Not Found";
    }else{
        cout<<"Found";
    }

    return 0;
}