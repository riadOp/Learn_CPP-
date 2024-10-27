#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Basic Set Idea !!
    set<int> integerSet;
    set<string> WSet;
    integerSet.insert(3);
    integerSet.insert(2);
    integerSet.insert(1);
    integerSet.erase(2);
    WSet.insert("RIad");
    WSet.insert("Ok");
    for(auto element : integerSet){
        std::cout << element << "  ";
    }
    for(auto element : WSet){
        std::cout << element << "  ";
    }

    //What if !!
    if(integerSet.count(3) == 0){
        std::cout << "Not Found";
    }else{
        std::cout <<"Found";
    }
    return 0;
}