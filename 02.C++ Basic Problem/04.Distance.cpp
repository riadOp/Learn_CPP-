#include<iostream>
#include<cmath> 
using namespace std ;
int main(){
    double a,b,c,d ;
    cin >> a >> b >> c  >> d ;
    cout << sqrt(pow((a-b),2) + pow((c-d),2));
    return 0 ;
}