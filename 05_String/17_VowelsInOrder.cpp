#include<iostream>
using namespace std;

int main(){
    string str = "iaeiouaaeeeeo";
    string s = "aeiou";
    int count = 0, maxCount = 0, start1 = 0, start2 = 0;
    int n1 = str.length(), n2 = s.length();

    while(start1<n1){
        if(str[start1] == s[start2]){
            count++;
            while(start1 != n1-1 && str[start1] == str[start1 + 1]){
                start1++; count++;
            }
            start1++; start2++;
            if(start2 == n2){
                maxCount = max(count, maxCount);
                start2 = count = 0;
            }
        }else{
            if(!start2) start1++;
            start2 = count = 0;
        }
    }

    cout<<maxCount;
    
    return 0;
}