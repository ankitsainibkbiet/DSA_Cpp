#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li; // list is similar to doubly linked list 
    li.push_back(4);
    li.push_back(5);
    li.push_front(3);
    li.push_front(2);
    li.push_front(1);

    int n = li.size();
    cout<<n<<endl;

    for(int val : li){
        cout<<val<<" ";
    }
    return 0;
}