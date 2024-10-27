#include<iostream>
using namespace std;
int main(){
    int N,a,e= 0,o=0,p=0,n=0 ;
    cin >> N ;

        for(int i = 1 ; i<=N ; i++){
            cin >> a ;
            if(a>=0){
                if(a!=0){
                    p++;
                }
                
                if(a%2==0){
                    e++;
                }else{
                    o++;
                }
            }else{
                n++;
                if(a%2==0){
                    e++;
                }else{
                    o++;
                }
            }
        }
        cout<<"Even: "<<e <<"\n" <<"Odd: " <<o <<"\n" <<"Positive: " <<p <<"\n" <<"Negative: "<<n ;

    
    return 0;
}