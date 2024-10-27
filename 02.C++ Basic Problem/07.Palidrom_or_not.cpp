#include<iostream>
using namespace std ;
int main(){
    int number  ;
    cin >> number ;
    int temp = number ;
    int reverse = 0 ;
    while(temp !=0){
        reverse = (reverse * 10 ) + (temp%10);
        temp = temp/10 ;
    }
    if(number == reverse){
        cout <<"Its a palidrom !!\n";
    }else {
        cout <<"Its not a Palidrom !!\n";
    }
    return 0 ;
}