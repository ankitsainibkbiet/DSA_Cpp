#include<iostream>
#include<vector>
using namespace std;

void productOfArray(){
    vector<int> vec={5,2,2};
    vector<int> vecAnswer;
    
    for(int i=0 ; i<vec.size() ; i++){
        bool flag = false;
        int value = 1 ;
        for(int j=0 ; j<vec.size() ; j++){
            if(i != j){
                value *= vec[j];
                flag = true;
            }
        }
        if(flag){
            vecAnswer.push_back(value);
        }else{
            vecAnswer.push_back(vec[0]);
        }
    }

    for(int val : vecAnswer){
        cout<<val<<" ";
    }
}

void productOfArrayOpti(){
    vector<int> vec={1,2,3,4};
    vector<int> vecAnswer , prefix(4,1) , sufix(4,1); // you have to initialize size of vec before acessing it's values

    for(int i=1 ; i<vec.size() ; i++){ //calculate Prefix
        prefix[i] = prefix[i-1] * vec[i-1];
    }
    for(int i=vec.size()-2 ; i>=0 ; i--){ //calculate sufix
        sufix[i] = sufix[i+1] * vec[i+1];
    }
    for(int i=0 ; i<vec.size() ; i++){ //multiply both for answer
        vecAnswer.push_back(prefix[i] * sufix[i]);
    }

    for(int val : vecAnswer){
        cout<<val<<" ";
    }
}

int main(){
    // productOfArray();
    productOfArrayOpti();
    return 0;
}