#include<iostream>
using namespace std;
int main(){
    int smallestNumber (int a , int b , int c );{
        int smallest= 0;
        // using switch with a constant expression(1)
        switch(1){
            //if conditons is true, it executes corresponding case
            case (a <= b && a<= c? 1 : 0):
            smallest = a;
            break;
             case (b <= a && b<= c? 1 : 0):
            smallest = b;
            break;
             case (c <= a && c<= b? 1 : 0):
            smallest = c;
            break;
        }
        return smallest;
  }
            int main (){
                //testing the smallest number function
                cout << smallestNumber(3, 7, 2)<< endl;//output will be 2
                return 0;
            }
}