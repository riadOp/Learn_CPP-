#include<iostream>
using namespace std;
int main(){
    int x = 100 , count = 0 ;
    while(x%2==0){
        count++ ;
        x = x/10 ;
    }
    cout << count <<endl;
    return 0 ;
}