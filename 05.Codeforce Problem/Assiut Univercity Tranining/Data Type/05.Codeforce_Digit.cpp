#include<iostream>
using namespace std;
int main(){
    int T,a ;
    cin >> T ;

        for(int i = 1 ; i<=T ; i++){
            cin >> a ;
            while(a>9){
                int x = a%10 ;
                cout << x <<" " ;
                a = a/10;
            }
            cout << a ;
            cout <<endl;
        }
    
    return 0;
}