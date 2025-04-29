#include<iostream>
#include<vector>
using namespace std;

void addingSpaceBrute(){
    string str = "LeetcodeHelpsMeLearn";
    vector<int> space = {8,13,15};

    for(int i=0; i<space.size(); i++){
        int index = space[i] + i; // for adjusting index after insertion add 'i' in it
        str.insert(index, " ");
    }

    cout<<str;
}

void addingSpaceOpti(){
    string str = "LeetcodeHelpsMeLearn";
    vector<int> space = {8,13,15};
    string result;
    int x = 0, index = space[x], duplicateX = 0;

    for(int i=0; i<str.length(); i++){
        if(index == i){
            result += " ";
            if(space.size() > ++duplicateX){  
                index = space[++x];
            }
        }
        result += str[i];
    }

    cout<<result;
}

int main() {
    //addingSpaceBrute();
    addingSpaceOpti();
    return 0;
}