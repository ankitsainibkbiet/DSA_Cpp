#include<iostream>
#include<algorithm>
#include <string.h>
using namespace std;

void charString(){
    char arr[] = "hello World";

    int start = 0, end = strlen(arr)-1;
    reverse(arr, arr+end+1);  // iterator did not include last position

    // while(start <= end){
    //     swap(arr[start], arr[end]);
    //     start++; end--;
    // }

    for(char ch : arr){
        cout<<ch<<" ";
    }
}

void planString(){
    string str = "HELLO WORLD";

    // reverse(str.begin(), str.end());  this can be only used in string not in charArr

    int start=0, end=str.length()-1;  // this length() give pointer to the "\0 , so use -1"

    while(start <= end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    
    cout<<str;
}

int main(){
    // charString();
    planString();
    return 0;
}