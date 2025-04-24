#include<iostream>
using namespace std;

void twoDimensionArray(){
    int matrix[3][3];
    int row = 3, column = 3;
    
    // input 
    cout<<"Input for 2D Array :-"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    // output 
    cout<<"Output for 2D Array :-"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    twoDimensionArray();
    return 0;
}