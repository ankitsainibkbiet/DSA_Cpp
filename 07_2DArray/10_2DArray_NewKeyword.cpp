#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row;
    cin>>col;

    int** arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int rs = 0, re = row-1, cs = 0, ce = col-1;

    while(rs <= re && cs <= ce){
        //top
        for(int i=cs; i<=ce; i++){
            cout<<arr[rs][i]<<" ";
        }

        //right
        for(int i=rs+1; i<=re; i++){
            cout<<arr[i][ce]<<" ";
        }

        //bottom
        for(int i=ce-1; i>=cs; i--){
            if(rs == re || cs == ce){
                break;
            }
            cout<<arr[re][i]<<" ";
        }
    
        //left
       for(int i=re-1; i>=rs+1; i--){
            if(rs == re || cs == ce){
                break;
            }
            cout<<arr[i][rs]<<" ";
        } 
            
        
        rs++; re--;cs++;ce--;
    }

    return 0;
}