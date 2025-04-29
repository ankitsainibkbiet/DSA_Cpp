#include<iostream>
#include<vector>
using namespace std;

void waterContainerBrute(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    int maxWater = 0 , height , length ;

    for(int i=0 ; i<vec.size() ; i++){
        for(int j=1 ; j<vec.size() ; j++){
            height = min(vec[i] , vec[j]);
            length = j-i;
            maxWater = max(maxWater , height*length);
        }
    }
    cout<<maxWater<<endl;
}

void waterContainerOpti(){
    vector<int> vec={8,7,2,1};
    int maxWater = 0, start = 0, end = vec.size()-1, height, length ;

    while(start<end){
        height = min(vec[start] , vec[end]);
        length = end-start;
        maxWater = max(maxWater , height*length);
        if(vec[start] < vec[end]){
            start++;
        }else{
            end--;
        }
    }

    cout<<maxWater;
}

int main(){
    // waterContainerBrute();
    waterContainerOpti();
    return 0;
}