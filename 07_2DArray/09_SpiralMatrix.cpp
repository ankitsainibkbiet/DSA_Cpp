#include<iostream>
#include<vector>
using namespace std;

void spiralMatrix(){
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int m = matrix.size(), n = matrix[0].size();
    int rstart = 0, rend = m-1, cstart = 0, cend = n-1;

    while(rstart <= rend && cstart <= cend){
        for(int i=rstart; i<= cend; i++){ // top
            cout<<matrix[rstart][i]<<" ";
        }
        for(int i=rstart+1; i<= rend; i++){ // right
            cout<<matrix[i][cend]<<" ";
        }
        for(int i=cend-1; i>=cstart; i--){ // bottom
            if(rstart == rend || cstart == cend){ 
                break; // to prevent overflow 
            }
            cout<<matrix[rend][i]<<" ";
        }
        for(int i=rend-1; i>=rstart+1; i--){ // left
            if(rstart == rend || cstart == cend){ 
                break; // to prevent overflow 
            }
            cout<<matrix[i][cstart]<<" ";
        }
        rstart++; cstart++; rend--; cend--;
    }
}

int main(){
    spiralMatrix();
    return 0;
}