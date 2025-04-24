#include<iostream>
#include<climits>
using namespace std;

void maxSum(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int row = 3, column = 3, sum1 = INT_MIN, sum2 = INT_MIN;

    for(int i=0; i<row; i++){
        int currentRowSum = 0;
        int currentColumnSum = 0;
        for(int j=0; j<column; j++){
            currentRowSum += arr[i][j];
            currentColumnSum += arr[j][i];
        }
        sum1 = max(sum1, currentRowSum);
        sum2 = max(sum2, currentColumnSum);
    }
    cout<<"currentRowSum : "<<sum1<<endl;
    cout<<"currentColumnSum : "<<sum2;
}

int main(){
    maxSum();
    return 0;
}