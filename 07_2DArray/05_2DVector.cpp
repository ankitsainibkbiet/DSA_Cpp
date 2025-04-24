#include<iostream>
#include<vector>
using namespace std;

void twoDimensionVector(){
    vector<vector<int>> vec = {{1,2,3}, {4,5,6,10,11}, {7,8,9}};
    // Row = vec.size()
    // Column = vec[i].size()
    // Row can be of different size 

    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    twoDimensionVector();
    return 0;
}