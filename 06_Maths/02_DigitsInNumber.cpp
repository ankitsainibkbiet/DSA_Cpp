#include<iostream>
using namespace std;

int main(){
    int digit = 456, count = 0, sum = 0, multi = 1, ans = 0;

    while(digit > 0){
        ans = digit%10;
        count++;
        sum += ans;
        multi *= ans;
        cout<<ans<<" ";
        digit /= 10;
    }
    cout<<endl;

    cout<<"total number of digits are "<<count<<endl;
    cout<<"sum of digits is "<<sum<<endl;
    cout<<"Multiplication of digits is "<<multi<<endl;

    return 0;
}