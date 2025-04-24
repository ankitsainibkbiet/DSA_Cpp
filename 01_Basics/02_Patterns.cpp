#include <iostream>
using namespace std;

void pattern01(){
    cout<<endl;
    for(int i=0 ; i < 5 ; i++){
        for(int j=1 ; j <= 5 ; j++ ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern02(){
    for(int i=0 ; i<5 ; i++){
        for(int j=65 ; j<70 ; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern03(){
    int num = 1;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern04(){
    char  ch = 'A';
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern05(){
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern06(){
    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern07(){
    char ch = 'A';
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch += 1;
    }
    cout<<endl;
}

void pattern08(){
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<i+1 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern09(){
    for(int i=0 ; i<5 ; i++){
        for(int j=i+1 ; j>0 ; j--){
            cout<<j<<" "<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern10(){
    int num = 1;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern11(){
    int n = 5;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            cout<<' ';
        }
            for(int k=0; k<n-i; k++){
                cout<<(i+1);
            }
        cout<<endl;
    }
    cout<<endl;
}

void pattern12(){
    int n=4;
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        for(int k=0 ; k<=i ; k++){
            cout<<(k+1);
        }
        for(int l=i; l>0; l--){
            cout<<l;
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern13(){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        cout<<'*';
        if(i != 0){
            for(int k=0; k<2*i-1; k++){
                cout<<" ";
            }
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i= 0 ; i<(n-1) ; i++){
        for(int j=0 ; j<(i+1) ; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != n-2){
            for(int k=0; k<(2*(n-2-i)-1); k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern14(){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int k=0; k<2*n-(2*i+2); k++){
            cout<<" ";
        }
        for(int l=0; l<i+1; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern15(){
    int n =5;
    int num = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1; j++){
            if((i+j) % 2 == 0){
                cout<<"1"<<" ";
            } else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    // pattern01();
    // pattern02();
    // pattern03();
    // pattern04();
    // pattern05();
    // pattern06();
    // pattern07();
    // pattern08();
    // pattern09();
    // pattern10();
    // pattern11();
    // pattern12();
    // pattern13();
    // pattern14();
    pattern15();
    return 0;
}
