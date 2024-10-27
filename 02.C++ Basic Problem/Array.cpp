#include<iostream>
using namespace std ;
int main(){
    
    int arr[5] = {1,2,3,4,5};
    int last = 4 ;
    for(int i = 0 ;i<last ; i++){
        int temp = arr[i];
        arr[i] = arr[last] ;
        arr[last] = temp ;
        last--;
    }
    for(int i = 0 ; i<5 ; i++){
        cout <<arr[i] <<" "<<'\n';
    }
    return 0;
}