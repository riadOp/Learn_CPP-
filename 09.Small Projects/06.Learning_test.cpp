#include<iostream>
using namespace std ;

int main(){
    int Array[5] = {5,2,2,2,2};
    int Fequency[100000] = {0};
    for(int i = 0 ; i<5 ; i++){
        Fequency[Array[i]] = Fequency[Array[i]] + 1 ;
    }
    for(int i = 0 ; i<6 ; i++){
        cout << Fequency[i] ;
    }
    return 0 ;
}