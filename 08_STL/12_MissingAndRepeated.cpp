#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>grid) {
    int n = grid.size(), a, b, actualSum = 0;
    vector<int> ans;
    unordered_set<int> s;   

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
            actualSum += grid[i][j];
        }
    }

    int sum = (n*n)*((n*n)+1)/2;
    b = sum + a - actualSum;
    ans.push_back(b);

    return ans;

}

int main(){
    vector<vector<int>> grid = {{1,3}, {2,2}};
    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}