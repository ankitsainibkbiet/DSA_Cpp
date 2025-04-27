#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {1, 2, 55, 8, 45};  // store data in acsending order

    s.insert(100); // log(n), it is self balancing tree 
    
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

// multiset allow duplicate values 