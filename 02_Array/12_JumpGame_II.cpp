#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {7,0,9,6,9,6,1,7,9,0,1,2,9,0,3};
    int r = 0, l = 0, last = 0, jump = 0;

    while(r < vec.size()-1){
        for(int i=l; i<=r; i++){
            last = max(last, i + vec[i]);
        }
        l = r + 1;
        r = last;
        jump++;
    }

    cout<<jump;

    return 0;
}