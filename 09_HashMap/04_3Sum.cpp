#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

void threeSumBruteForce(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    int n = vec.size();
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
    vector<int> vec = {-1,2,-2,0,1,-4};
    int n = vec.size();
    vector<vector<int>> matrix;
    unordered_set<int> s1;
    set<vector<int>> s2;

    for(int i=0; i<n; i++){
        s1.clear(); // to delete the no for every i to remove backward elements
        for(int j=i+1; j<n; j++){
            int target = -(vec[i] + vec[j]); 
            if(s1.find(target) != s1.end()){
                vector<int> temp = {vec[i], vec[j], target};
                sort(temp.begin(), temp.end());
                if(s2.find(temp) == s2.end()){
                    s2.insert(temp);
                    matrix.push_back(temp);
                }
            }
            s1.insert(vec[j]); // we always need the number rather then i and j so this work
        }
    }

    for(vector<int> val : matrix){
        for(int ans : val){
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}

int main() {
    // threeSumBruteForce();
    threeSumOptimize();
    return 0;
}