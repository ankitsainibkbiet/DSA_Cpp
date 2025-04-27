#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> vec = {2,7,11,15};
    int target = 260;
    unordered_map<int, int> m;
    bool found = false;

    for(int i=0; i<vec.size(); i++){
        int firstEle = vec[i], secondEle = target-firstEle;
        if(m.find(secondEle) != m.end()){
            cout<<"indexs are : "<<i<<","<<m[secondEle]<<endl;
            found = true;
            break;
        }
        m.emplace(vec[i], i);
    }
    
    if(!found){
        cout<<target<<" is not present in vector";
    }

    return 0;
}