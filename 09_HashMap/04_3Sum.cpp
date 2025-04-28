#include<iostream>
#include<vector>
using namespace std;

void threeSumBruteForce(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    int sum = 0, n = vec.size();
    int row = 0, column = 0;
    vector<vector<int>> matrix;

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(vec[i]+vec[j]+vec[k] == 0){
                    vector<int> temp = {vec[i], vec[j], vec[k]};  // to store a row in matrix
                    matrix.push_back(temp);
                }
            }
        }
    }

    for(vector<int> val : matrix){   // to print matrix by forEach loop
        for(int ans : val){
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}

int main() {
    threeSumBruteForce();
    return 0;
}