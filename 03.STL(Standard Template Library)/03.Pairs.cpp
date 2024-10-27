#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Root Pair , how ? 
    pair<int , int> intPair;
    intPair.first = 7;
    intPair.second = 10;
    intPair = {7,11};
    cout << intPair.first << intPair.second ;

    //Basic 
    pair<int , pair<string ,int>> Test;
    Test.first = 10;
    Test.second = {"Hello" , 6};
    std::cout << Test.first;
    std::cout << Test.second.first;
    std::cout << Test.second.second <<'\n';

    //Neasted Pairs Test
    pair<vector<int>, int> Test2;
    Test2.first.push_back(10);
    Test2.first.push_back(1);
    Test2.first.push_back(0);
    Test2.first.push_back(70);
    Test2.first.push_back(40);
    for(auto element : Test2.first){
        std::cout << element <<'\n';
    }

    //Multiple pairs and input 
    pair<int , string> Student[2];
    for(int i = 1 ; i<=2 ;i++){
        std::cin >> Student[i].first >> Student[i].second;
    }
    for(int i = 1 ; i<=2 ;i++){
        std::cout << Student[i].first <<"  " << Student[i].second <<'\n';
    }

    return 0;
}