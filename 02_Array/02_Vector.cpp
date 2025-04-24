#include<iostream>
#include<vector>
using namespace std;

void vectorBasics(){
    vector<int> vec01;
    vector<char> vec02 = {'a', 'b', 'c', 'd', 'e'};
    
    vec01.push_back(1);
    vec01.push_back(1);
    vec01.push_back(1);
    vec01.push_back(1);
    vec01.push_back(1);
    vec01.pop_back();
    cout<<"Size of vector01 : "<<vec01.size()<<endl;
    cout<<"Capacity of vector01 : "<<vec01.capacity()<<endl;
    cout<<"Values in Vector01 : ";
    for(int val : vec01){
        cout<<val<<" ";
    }
    cout<<endl<<endl;
    
    cout<<"Size of vector02 : "<<vec02.size()<<endl;
    cout<<"Capacity of vector02 : "<<vec02.capacity()<<endl;
    cout<<"Values in Vector02 : ";
    for(char val : vec02){
        cout<<val<<" ";
    }
    cout<<endl<<endl;
    
}

void singleNumberProblem(){
    int sum = 0;
    vector <int> vec1 = {1,2,1,2,4,4,3,3,8};
    for(int val : vec1){
        sum = sum^val;
    }
    cout<<"Unique value is : "<<sum;
}

void practice01(int n){
    vector <int> vec={1,2,3,4,5,6,7,84,5,6,98,154,6};
    bool search = false;
    int index = -1;
    for(int val : vec){
        index++;
        if(val == n){
            search = true;
            break;
        }
    }
    if(search){
        cout<<n<<" is present in vector at index "<<index<<endl;
    }else{
        cout<<n<<" is absent in vector"<<endl;
    }
}

void practice02(){
    vector <int> vec={1,2,3,4,5,6,7,8,9,10};
    int temp = 0;
    int start = 0;
    int end = vec.size()-1;
    for(int i=0 ; i<vec.size() ; i++){
        while(start<end){
            temp =  vec[start];
            vec[start] = vec[end];
            vec[end] = temp;
            start++;
            end--;
        }
    }
    for(int val : vec){
        cout<<val<<" ";
    }
}

int main(){
    // vectorBasics();
    // singleNumberProblem();
    // practice01(84);
    practice02();
    return 0;
}