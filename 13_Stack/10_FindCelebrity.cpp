#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int r, c;

    cout<<"Row: ";
    cin>>r;

    cout<<"Col: ";
    cin>>c;
    cout<<endl;

    vector<vector<int>> mat(r, vector<int>(c));

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"\nGiven Matrix is : "<<endl;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    stack<int> s;

    for(int i=0; i<r; i++){
        s.push(i);
    }

    int celeb;
    while(s.size() > 1){
        int i = s.top(); s.pop();
        int j = s.top(); s.pop();

        if(mat[i][j] == 1){
            celeb = j;
        }else{
            celeb = i;
        }

        s.push(celeb);
    }

    for(int i=0; i<r; i++){
        if(mat[celeb][i] == 1){
            cout<<-1;
        }
    }

    cout<<celeb;

    return 0;
}