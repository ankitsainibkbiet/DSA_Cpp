#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {-2,-1,-1,1,1,2,2};
    int n = vec.size();
    vector<vector<int>> matrix;

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++){
        if(i > 0 && vec[i] == vec[i-1]) continue;  // case 01
        for(int j=i+1; j<n; j++){
            if(j > i+1 && vec[j] == vec[j-1]) continue;  // case 02
            int k = j+1, l = n-1;
            while(k < l){
                long long sum = (long long)vec[i] + (long long)vec[j] + (long long)vec[k] + (long long)vec[l];
                if(sum > 0){
                    l--;
                }else if(sum < 0){
                    k++;
                }else{
                    matrix.push_back({vec[i], vec[j], vec[k], vec[l]});
                    k++; l--;
                    while(k < l && vec[k] == vec[k-1]) k++;  // case 03
                }
            }
        }
    }

    for(auto val : matrix){
        for(auto ans : val){
            cout<<ans<<",";
        }
        cout<<endl;
    }

    return 0;
}