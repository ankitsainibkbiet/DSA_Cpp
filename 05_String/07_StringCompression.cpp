#include<iostream>
#include<vector>
using namespace std;

void practice(){
    vector<char> str = {'a','a','a','b','b','c','c','c'};
    int index = 0;   // Position to insert the compressed character or digit
    int n = str.size();
    
    for(int i=0; i<n; i++){
        int freq=0;
        char current = str[i];
        while(str[i] == current && i<n){   // freq counter
            freq++;
            i++;
        }

        str[index++] = current; // Write the character
        if(freq > 1){ 
            string freqStr = to_string(freq);  // convert int to string to insert in char arr
            for(char ch: freqStr){   // if freq > 1, write the count as characters
                str[index++] = ch;
            }
        }
        i--;  // Because the for loop will also increment i
    }

    str.resize(index);  // delete the extra characters 

    for(char ch: str){
        cout<<ch<<" ";
    }
}

int main(){
    practice();
    return 0;
}