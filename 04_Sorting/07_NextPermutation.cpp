#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec={5,4,2,1};
    // next_permutation(vec.begin() , vec.end());  

    int pivot = -1;
    for(int i=vec.size()-1 ; i>0 ; i--){
        if(vec[i] > vec[i- 1]){
            pivot = i-1; // error outOfBound when i = 0 
            cout<<vec[pivot]<<endl;
            break;
        }
    }
    if(pivot == -1){  // edge case
        reverse(vec.begin(), vec.end()); // as per question
        for(int val: vec){
            cout<<val<<" ";
        }
        return 0;
    }

    for(int i=vec.size()-1 ; i>=0 ; i--){
        if(vec[pivot] < vec[i]){
            swap(vec[pivot] , vec[i]);
            break;
        }
    }

    int start = pivot+1 , end = vec.size()-1;
    cout<<start<<" "<<end<<endl;
    while(start <= end){
        swap(vec[start++] , vec[end--]);
    }
    // reverse(vec.begin()+start , vec.end());

    for(int val: vec){
        cout<<val<<" ";
    }

    return 0;
}
