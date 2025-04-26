#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> student = {{1,"Ankit"}, {2,"Akash"}};  // store data in sorted way acc to key 
    student[7] = "Aditya";
    student[4] = "Himanshu";
    student[8] = "Abhinav";
    student[6] = "Devanshu";
    student.emplace(3,"Amit"); // log(n), it is self balancing tree 
    
    for(pair<int, string> val : student){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    if(student.find(1) == student.end()){
        cout<<"Not Found";
    }else{
        cout<<"Found";
    }

    return 0;
}

// multimap allow duplicate [key, value] pair and to delete use erase(find())