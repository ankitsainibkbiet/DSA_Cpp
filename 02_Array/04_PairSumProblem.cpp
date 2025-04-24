#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void pairSumBrute(){
    int target = 19;
    vector <int> vecIndex;
    vector <int> vec={2,7,8,11,45}; // only for sorted array 

    for(int i=0 ; i<vec.size() ; i++){
        for(int j=i+1 ; j<vec.size() ; j++){
            if(vec[i]+ vec[j] == target){
                vecIndex.push_back(i);
                vecIndex.push_back(j);
            }
        }
    }
    
    cout<<"Index of pairs are : ";
    for(int val : vecIndex){
        cout<<val<<" ";
    }
}

void pairSumOpti(){
    int target = 47;
    vector <int> vec={2,7,8,11,45}; // only for sorted array 
    vector <int> vecIndex;
    int start = 0;
    int end = vec.size()-1;

    while(start<end){
        if(vec[start]+vec[end] > target){
            end--;
        }else if(vec[start]+vec[end] < target){
            start++;
        }else{
            vecIndex.push_back(start);
            vecIndex.push_back(end);
            break;
        }
    }

    for(int val : vecIndex){
        cout<<val<<" ";
    }
}

void majorityElement(){
    vector<int> vec={1,2,1,3,3,3,3};
    int index = 0;
    
    for(int i=0 ; i<vec.size() ; i++){
        int appear = 0;
        for(int j=0 ; j<vec.size() ; j++){
            if(vec[i] == vec[j]){
                appear++;
            }
            if(appear > vec.size()/2){
                index = i;
            }
        }
    }
    cout<<"Majority element is "<<vec[index];
}

void majorityElementOpti(){

    vector<int> vec= {1,2,2,3,3,3,3,3,3};
    int size = vec.size();
    int majority = size/2;
    int freq = 1;

    sort(vec.begin() , vec.end());

    for(int i=1 ; i<size ; i++){
        if(vec[i] == vec[i-1]){
            freq++;
        }else{
            freq=1;
        }
        if(freq > majority){
            cout<<vec[i]<<" is the Majority element in the array !";
            return;
        }
    }

    cout << "No majority element found!" << endl;
}

void majorityElementMooresAlgo(){
    vector<int> vec={1,1,2,2,2,1,1};
    int freq = 0;
    int majorityEle;

    for(int i=0 ; i<vec.size() ; i++){
        if(freq == 0){
            majorityEle = vec[i]; 
        }
        if(majorityEle == vec[i]){
            freq++;
        }else{
            freq--;
        }
    }

    cout<<majorityEle<<" is the majority Element";
}

int main(){
    // pairSumBrute();
    // pairSumOpti();
    // majorityElement();
    // majorityElementOpti();
    majorityElementMooresAlgo();
    return 0;
}