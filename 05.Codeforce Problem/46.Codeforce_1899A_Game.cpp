#include<iostream>
using namespace std ;

int main(){
    int t ,n;
    cin >> t ;
    for(int i = 1 ; i<=t ;i++){
        cin >> n ;
        if(n%3==0){
            cout << "Second\n";
        }else{
            cout <<"First\n";
        }
    }
    return 0 ;
}