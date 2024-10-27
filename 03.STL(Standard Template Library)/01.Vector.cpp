#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> array; //Declaration of Vector
    
    array.push_back(1); //Pushing Value at the end
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);

    std::cout << array[0] <<'\n';                                            //this is a Comment 
    std::cout << array[1] <<'\n';                                            //Umm also a Comment
    std::cout << array[2] <<'\n';                                        //Make Sure to like the Vido
    std::cout << array[3] <<'\n';                                             //aa, One More thing
    std::cout <<"Size : " <<array.size() <<'\n';                            //Subscribe

    array.pop_back(); // Poping out the last element
    array.pop_back();

    std::cout <<"Size : " <<array.size() <<'\n';
    
    // array.clear();//Erase all the element 
    
    std::cout <<"Size : " <<array.size() <<'\n';
    
    //Iterate Over a Vector(Method-1)
    for(auto element = array.begin() ; element < array.end() ; element++){
        std::cout << *element;
    }
    
    //Iterate over a Vector(Method-2)
    for(const auto &element : array){
        std::cout << element;
    }
    return 0;
}