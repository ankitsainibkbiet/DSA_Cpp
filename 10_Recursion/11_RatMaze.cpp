#include<iostream>
#include<vector>
using namespace std;

void ratMaze(vector<vector<int>>& maze, vector<string>& ans, string path, int n, int row, int col){
    if(row >= n || col >= n || row < 0 || col < 0 || maze[row][col] == -1 || maze[row][col] == 0){
        return;  // to check index is valid
    }
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;  // after getting the ans
    }

    maze[row][col] = -1;
    
    ratMaze(maze, ans, path+"U", n, row-1, col);  // up
    ratMaze(maze, ans, path+"D", n, row+1, col);  // down
    ratMaze(maze, ans, path+ "L", n, row, col-1);  // left
    ratMaze(maze, ans, path+"R", n, row, col+1);  // right

    maze[row][col] = 1;  // backtracking
}

int main(){
    vector<string> ans;
    string path = "";
    vector<vector<int>> maze = {
        {1,1,0,0},
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,1}
    };
    int n = maze.size();

    ratMaze(maze, ans, path, n, 0, 0);

    for(auto val : ans){
        for(auto key : val){
            cout<<key<<" ";
        }
        cout<<endl;
    }

    return 0;
}