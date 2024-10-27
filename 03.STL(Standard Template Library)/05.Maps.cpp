#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Basic
    int x;
    map<string,int>myMap;
    myMap["Riad"] = 10;
    myMap["If"] = 15;
    std::cout << myMap["If"] << '\n';
    std::cout << myMap["Riad"] << '\n';
    
    //iterate 
    auto iter = myMap.find("If");
    if(iter != myMap.end() ){
        std::cout << iter -> second;
    }
    return 0;
}