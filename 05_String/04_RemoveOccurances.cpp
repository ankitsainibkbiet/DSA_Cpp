#include<iostream>
using namespace std;

int main(){
    string str = "abxxyxyy";
    string val = "xy"; 
    int index = -1, partLength = val.length();
    
    while(0 <= str.find(val) && str.find(val) <= str.length()){
        index = str.find(val);
        if(index != -1){
            str.erase(index, partLength);
        }
    }

    cout<<str;

    return 0;
}