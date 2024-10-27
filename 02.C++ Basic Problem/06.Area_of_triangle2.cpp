#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    double a1,b1,a2,b2,a3,b3 ;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >>b3 ;
    cout <<"Area : "<< 0.5 * (abs((a1 * (b2-b3) + (a2 * (b3-b1)) + (a3 * (b1-b2)))));
    return 0 ;
} 