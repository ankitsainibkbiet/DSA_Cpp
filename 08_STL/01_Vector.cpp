#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5,6,7,8};

    int n = vec.size(), c = vec.capacity(); 
    cout<<"\nsize of vec : "<<n<<endl;
    cout<<"capacity of vector : "<<c<<endl<<endl;

    cout<<"initial values befor pop_back and push_back : ";
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();

    vec.push_back(5);

    cout<<"values after pop_back and push_back : ";
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    cout<<"size of vec after operations : "<<vec.size()<<endl; 
    cout<<"capacity of vector after operations : "<<vec.capacity()<<endl<<endl;

    vec.erase(vec.begin()+3);
    vec.insert(vec.begin()+3, 40);
    cout<<"vector after erasing 4 and inserting 40 : ";
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    cout<<"iterator Begin() : "<<*(vec.begin())<<endl;
    cout<<"iterator end() after minus one : "<<*(vec.end()-1)<<endl<<endl;


    return 0;
}