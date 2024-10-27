#include<iostream>

int main(){
    enum day {Sunday,Monday,tuesday};
    day today = Sunday;
    switch(today){
        case Sunday : 
                   std::cout <<"Today is sunday";
                   break;
        case Monday : 
                   std::cout <<"Today is sunday";
                   break;
        case tuesday : 
                   std::cout <<"Today is sunday";
                   break;                      
    }
    return 0;
}