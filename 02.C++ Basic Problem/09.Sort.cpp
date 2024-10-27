#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a , b , c ;
    cin >> a >> b >> c ;
    if(a < b && a<c){
        if(b>c){
            cout << a <<endl<< c <<endl<< b <<endl;
        }else{
            cout << a<<endl << b<<endl << c << endl;
        }
    }else if(b<a && b<c){
        if(a>c){
            cout << b <<endl<< c<<endl << a ;
        }else {
            cout << b <<endl<< a<<endl << c << endl;
        }
    }else{
        if(a>b){
            cout << c<<endl << b <<endl<< a <<endl;
        }else{
            cout << c <<endl<< a <<endl<< b <<endl;
        }
    }
    return 0;
}