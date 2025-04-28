#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void threeSumBruteForce(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    int sum = 0, n = vec.size();
    int row = 0, column = 0;
    vector<vector<int>> matrix;
    set<vector<int>> s;

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(vec[i]+vec[j]+vec[k] == 0){
                    vector<int> temp = {vec[i], vec[j], vec[k]};  // to store a row in matrix
                    sort(temp.begin(), temp.end());
                    if(s.find(temp) == s.end()){ // to check the duplicates and set can arrange the vector<int> but unordered_set need a hash function to arrange them which is not available for vector
                        s.insert(temp);
                        matrix.push_back(temp);
                    }
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

void threeSumOptimize(){

}

int main() {
    threeSumBruteForce();
    threeSumOptimize();
    return 0;
}