#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Who{1,2,3};
    int a,b;
    cin >> a >> b;
    Who.erase(a);
    Who.erase(b);
    for(auto element : Who){
        cout << element;
    }
    return 0;
}