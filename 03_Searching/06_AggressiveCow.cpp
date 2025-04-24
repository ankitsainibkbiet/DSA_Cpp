#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(int mid, int totalCow, int totalStall, vector<int> vec){
    int countCow = 1;
    int lastPosition = 0;

    for(int i=1 ; i<vec.size() ; i++){
        if(vec[i] - vec[lastPosition] >= mid){ // check should be for greater or equal to minimum distance
            countCow++;
            lastPosition = i;
        }
        if(countCow == totalCow){ // we just have to place all cows so it can be befor n-1 place in vec
            return true;
        }
    }

    return false;
}

int main(){
    vector<int> vec={1,2,8,4,9};
    int totalStall = 5 , totalCow = 3 , n = vec.size();
    sort(vec.begin() , vec.end());

    int start = 1 , end = vec[n-1]-vec[0] , ans = 0 ;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(isValid(mid, totalCow, totalStall, vec)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    cout<<ans;

    return 0;
}
