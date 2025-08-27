#include<iostream>
using namespace std;

string convertString(string str){
    string result;
    for(char ch : str){
        if(isalnum(ch)){   // this is used to check alphanumeric character a-z|A-Z|0-9
            result += tolower(ch);  // to make lowerCase
        }
    }
    return result;
}

void palindrom(){
    string str = "A man, a plan, a canal: Panama";
    str = convertString(str);

    if(str.length() <= 1){
        cout<<"Palindrom";
        return;
    }

    int start = 0, end = str.length()-1;
    while(start <= end){
        if(str[start] != str[end]){
            cout<<"Not palindrom";
            return;
        }else if(str[start] == str[end]){
            start++;end--;
        }
    }

    cout<<"Palindrom";
    return;
}

int main(){
    palindrom();
    return 0;
}