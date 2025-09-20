#include<iostream>
using namespace std;

class Solution {
public:
    bool subtractive(string& ans, int& num){
        if((num==4) || (num>=40 && num<50) || (num>=400 && num<500)){
            if(num >= 400){
                ans += "CD";
                num -= 400;
                return true;
            }else if(num >= 40){
                ans += "XL";
                num -= 40;
                return true;
            }else{
                ans += "IV";
                num -= 4;
                return true;
            }
        }else if((num==9) || (num>=90 && num<100) || (num>=900 && num<1000)){
            if(num >= 900){
                ans += "CM";
                num -= 900;
                return true;
            }else if(num >= 90){
                ans += "XC";
                num -= 90;
                return true;
            }else{
                ans += "IX";
                num -= 9;
                return true;
            }
        }else{
            return false;
        }
    }
    
    void makeRoman(string& ans, int& num) {
        if (1 <= num && num < 5) {
            if(subtractive(ans, num)) return;
            ans += 'I';
            num -= 1;
        }
        else if (5 <= num && num < 10) {
            if(subtractive(ans, num)) return;
            ans += 'V';
            num -= 5;
        }
        else if (10 <= num && num < 50) {
            if(subtractive(ans, num)) return;
            ans += 'X';
            num -= 10;
        }
        else if (50 <= num && num < 100) {
            if(subtractive(ans, num)) return;
            ans += 'L';
            num -= 50;
        }
        else if (100 <= num && num < 500) {
            if(subtractive(ans, num)) return;
            ans += 'C';
            num -= 100;
        }
        else if (500 <= num && num < 1000) {
            if(subtractive(ans, num)) return;
            ans += 'D';
            num -= 500;
        }
        else if (1000 <= num && num < 4000) {
            if(subtractive(ans, num)) return;
            ans += 'M';
            num -= 1000;
        }
    }

    string intToRoman(int num) {
        string ans = "";
        while(num > 0){
            makeRoman(ans, num);
        }

        return ans;
    }
};