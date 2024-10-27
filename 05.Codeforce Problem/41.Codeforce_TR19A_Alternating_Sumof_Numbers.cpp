#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,sum = 0,a;
    cin >> t;
    for(int i = 1 ; i<=t ; i++){
        cin >> n ;
        sum = 0;
        for(int i = 1 ; i<=n ;i++){
            std::cin >> a;
            if(i%2==0){
                sum = sum - a;
            }else{
                sum = sum + a;
            }
        }
        cout << sum <<'\n';
    }
    return 0;
}