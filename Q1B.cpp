#include<iostream>
using namespace std;
int main(){
    int year; //declare year as a variable 
    cout << "Enter the year to be checked if leap/not: ";
    cin>> year;//input year to be checked if leap year or not
    if(year%4==0){//check whether it is a leap year or not
        cout<< "it's a leap year"<< endl;//output if true
    }else{
        cout<< "it's not a leap year"<< endl;//output if false
    }
    return 0;

    }
