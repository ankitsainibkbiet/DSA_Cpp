#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int, int> p = {1, 2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<char, string> p2 = {'a', "Ankit"}; 
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<char, pair<int, int>> p3 = {'a', {1,10}}; 
    cout<<p3.first<<" "<<p3.second.first<<","<<p3.second.second<<endl;

    vector<pair<int, int>> vec = {{1,2}, {3,4}, {5,6}};
    vec.push_back({7,8});
    vec.emplace_back(9,10); // no need of { }, this work in place directly for pair
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}