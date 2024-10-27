#include<bits/stdc++.h>
using namespace std ;

bool palidrome_or_not(int num){
    bool palidrome = false ;
    int temp = num ;
    int reverse  = 0 ; 
    while(temp != 0){
        reverse = reverse * 10 + (temp %10);
        temp = temp/10 ;
    }
    if(num == reverse){
        palidrome = true ;
    }else{
        palidrome = false ;
    }
    return palidrome ;
}



int main(){
    int n ;
    cin >>  n ;
    int Count = 0 , Number = 0;
    while(Count < n){
        Number++;
        if(palidrome_or_not(Number)==true){
            Count++ ;
        }
    }
    cout << Number  <<endl ;
    return 0;
}        