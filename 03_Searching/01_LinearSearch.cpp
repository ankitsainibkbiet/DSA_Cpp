#include<iostream>
using namespace std;

void linearSearch(int n){
    bool searchVar = false;
    int arr[] = {151,54,5,2,4,21,51,54,55,4,6562,};

    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        if(n == arr[i]){
            cout<<n<<" is present at index "<<i<<endl;
            searchVar = true;
        }
    }
    if(!searchVar){
        cout<<n<<" is abesent"<<endl;
    }
}

int main(){
    linearSearch(51);
    return 0;
}