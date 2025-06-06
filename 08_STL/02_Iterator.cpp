#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it;      // begin() and end()
    for(it = vec.begin(); it < vec.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator rit;      //rbegin() and rend()
    for(rit = vec.rbegin(); rit < vec.rend(); rit++){
        cout<<*(rit)<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator it = vec.begin(); it <= vec.begin()+2; it++){   // define inside like int i=0
        cout<<*(it)<<" "; 
    }
    cout<<endl;

    for(auto it = vec.begin(); it <= vec.begin()+3; it++){   // auto 
        cout<<*(it)<<" ";
    }
    cout<<endl;

    return 0;
}