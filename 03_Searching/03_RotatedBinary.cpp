#include<iostream>
#include<vector>
using namespace std;

void rotatedBinarySearch(int target){
    vector<int> vec={5,6,7,8,0,1,2,3,4};
    int n = vec.size();
    int start = 0 , end = n-1 ;

    while(start <= end){

        int mid = start + (end-start)/2;

        if(vec[mid] == target){
            cout<<"target is found at index "<<mid;
            return;
        }

        if(vec[start] <= vec[mid]){ // left sorted and this equals to sign is important 
            if(vec[start] <= target && target <= vec[mid]){
                end = mid-1;
            } else {
                start = mid+1;
            }
        } else { // right sorted
            if(vec[mid] <= target && target <= vec[end]){
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
    }

    cout<<"target not found";

}

int main(){
    rotatedBinarySearch(1);
    return 0;
}
