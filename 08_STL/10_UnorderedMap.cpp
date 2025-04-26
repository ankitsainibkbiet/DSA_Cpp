#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, string> student = {{1,"Ankit"}, {2,"Akash"}};  // store data in random way
    student.emplace(3,"Amit");
    student[7] = "Aditya";
    student[4] = "Himanshu";
    student[8] = "Abhinav";
    student[6] = "Devanshu";
    
    for(pair<int, string> val : student){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    return 0;
}
