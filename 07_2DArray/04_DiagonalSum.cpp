#include<iostream>
using namespace std;

void  diagonalSum(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int row = 4, column = 4, sum = 0; // there are 2 type of diagonals

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(i == j){
                sum += arr[i][j];
            }else if(j == row-1-i){ // this remove the common element 
                sum += arr[i][j];
            }
        }
    }
    cout<<sum; 
}

void diagonalSumOpti(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int row = 4, column = 4, sum = 0;

    for(int i=0; i<row; i++){
        sum += arr[i][i];
        if(i != row-1-i){ // to avoid same common values 
            sum += arr[i][row-1-i];
        }
    }
    cout<<sum;
}

int main(){
    // diagonalSum();
    diagonalSumOpti();
    return 0;
}