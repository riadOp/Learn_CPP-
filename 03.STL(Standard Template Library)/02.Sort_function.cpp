#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {5,3,4,1,2};
    vector<int> Arr = {5,3,4,2,1};
    vector<string> student ={"BOB","Jimmy","ALEX"};

    sort(a,a+5);
    sort(Arr.begin(),Arr.end());
    sort(student.begin(),student.end());

    for(auto element : a){
        std::cout << element <<" ";
    }
    std::cout << endl;
    for(auto element : Arr){
        std::cout << element <<"  ";
    }
    for(auto element : student){
        std::cout << element <<"  ";
    }
    return 0;
}