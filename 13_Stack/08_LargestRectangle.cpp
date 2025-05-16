#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){;
    vector<int> height = {2, 4, 5, 6, 1, 3};
    int n = height.size();
    stack<int> s1; 
    stack<int> s2;  
    vector<int> right(n, 0);
    vector<int> left(n, 0);

    // left smallest index
    for(int i=0; i<n; i++){
        while(!s1.empty() && height[s1.top()] >= height[i]){
            s1.pop();
        }
        left[i] = s1.empty() ? -1 : s1.top();  // -1 is valid for left side index
        s1.push(i);
    }

    // right smallest index
    for(int i=n-1; i>=0; i--){
        while(!s2.empty() && height[s2.top()] >= height[i]){
            s2.pop();
        }
        right[i] = s2.empty() ? n : s2.top();  // for right side we can take -1 as a boundary 
        s2.push(i);
    }

    int maxHeight = 0 ;
    for(int i=0 ; i<n; i++){
        int currHeight = height[i] * (right[i] - left[i] - 1);
        maxHeight = max(maxHeight, currHeight);
    }

    cout<<maxHeight;

    return 0;
}