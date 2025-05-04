#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void subArraySumBrute(){
    vector<int> vec = {1,1,1};
    int target = 3;
    int count = 0;

    for(int i=0; i<vec.size(); i++){
        int sum = vec[i];
        if(vec[i] == target){
            count++;
        }
        for(int j=i+1; j<vec.size(); j++){
            sum += vec[j];
            cout<<sum<<endl;
            if(sum == target){
                count++;
            }
        }
    }

    cout<<count;
}

void subArraySumOpti(){
    vector<int> vec = {1,2,3};   
    int target = 3;
    int count = 0;

    vector<int> prefixSum;
    int sum = 0;
    for(int i=0; i<vec.size(); i++){
        sum += vec[i];
        prefixSum.push_back(sum);
    }

    unordered_map<int, int> m;
    int value;
    for(int j=0; j<prefixSum.size(); j++){
        if(prefixSum[j] == target) count++;

        value = prefixSum[j] - target;
        if(m.find(value) != m.end()){
            count += m[value];
        }
        m[prefixSum[j]]++;
    }

    cout<<count;
}

int main() {
    // subArraySumBrute();    
    subArraySumOpti();
    return 0;
}