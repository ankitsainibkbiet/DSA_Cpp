#include<iostream>
#include<vector>
using namespace std;

void sortColorBrute(){
    vector<int> vec={2,0,2,1,1,0};
    bool isSwap = false;

    for(int i=0 ; i<vec.size() ; i++){
        for(int j=0 ; j<vec.size()-1-i; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j] , vec[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            cout<<"Already Sorted";
            return;
        }
    }

    for(int val : vec){
        cout<<val<<" ";
    }

}

void sortColorOpti(){
    vector<int> vec={2,0,2,1,1,0};
    int countZeros = 0 , countOnes = 0 , countTwos = 0 ;

    for(int i=0; i<vec.size() ; i++){
        if(vec[i] == 0){
            countZeros++;
        } else if(vec[i] == 1){
            countOnes++;
        } else{
            countTwos++;
        }
    }

    cout<<countZeros<<" "<<countOnes<<" "<<countTwos<<endl;
    cout<<countTwos+countOnes+countZeros<<endl; // this is error 

    for(int i=0 ; i<vec.size() ; i++){
        if(countZeros > 0){
            vec[i] = 0;
            countZeros--;
        }else if(countOnes > 0 ){
            vec[i] = 1;
            countOnes--;
        }else {
            vec[i] = 2;
            countTwos--;
        }
    }

    for(int val : vec){
        cout<<val<<" ";
    }
}

int main(){
    // sortColorBrute();
    sortColorOpti();
    return 0;
}
