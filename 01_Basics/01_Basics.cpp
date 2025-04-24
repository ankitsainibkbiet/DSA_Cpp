#include <iostream>
using namespace std;

int n;

void Pattern(){
    int m;
    cin>>m;
    for(int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=m ; j++){
            cout<<"$";
        }
        cout<<"\n";
    }
}

int factorial(int n){
    double fact = 1;
    for(int i=1 ; i<=n ; i++){
        fact = fact * i;
    }
    cout<<fact;
    return fact;
}

int main(){
    cout<<"HELLO WORLD ! \n"<<"row ";
    cin>>n;
    cout<<"column ";
    Pattern();
    factorial(5);
    return 0;
}

