#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "{{}}{{{{";
    stack<char> st;

    for(char ch : s){
        if(st.empty()){
            st.push(ch);
        }
        else if(ch == '{'){
            st.push(ch);
        }else if(ch == '}'){
            if(st.top() == '{'){
                st.pop();
            }else{
                st.push(ch);
            }
        }
    }

    int count = 0;
    while(!st.empty()){
        if(st.top() == '{'){
            count++;
        }
        st.pop();
    }

    cout<<(count+1)/2;

    return 0;
}