#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    int m = 3 , n = 3;
    int i = m-1 , j = n-1 , index = m+n-1;

    while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            swap(nums1[i--] , nums1[index--]);
        }else {
            swap(nums2[j--] , nums1[index--]);
        }
    }

    for(int k=0 ; k<n ; k++){
        if(j>=0){
            swap(nums2[j--] , nums1[index--]);
        }
    }

    for(int val : nums1){
        cout<<val<<" ";
    }

    return 0;
}
