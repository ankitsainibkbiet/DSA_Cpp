#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<string> str = {"flower", "flow", "fliwht"};
    string first = str[0];
    int count = INT_MAX;
    
    for(int i=1; i<str.size(); i++){
        string compare = str[i];
        int j=0;
        int length = 0;  // -1 is dangourse for compiler
        while(j < first.length() && j < compare.length()){
            if(first[j] == compare[j]){
                length++;
            }else{
                break;  // use for continuous match only
            }
            j++;
        }
        count = min(count, length);
    }

    if(count == 0){
        cout<<"-1";
    }else{
        cout<<first.substr(0, count);
    }

    return 0;
}