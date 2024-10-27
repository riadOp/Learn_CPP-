#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,z,xsum=0,ysum=0,zsum=0;
    cin >> n;
    for(int i = 1 ; i<=n ;i++){
        std::cin >> x >> y >> z;
        xsum= xsum+x;
        ysum = ysum + y;
        zsum = zsum +z;
    }
    if(xsum == 0 && ysum==0 && zsum==0){
        cout << "YES\n";
    }else{
        cout <<"NO\n";
    }
    return 0;
}