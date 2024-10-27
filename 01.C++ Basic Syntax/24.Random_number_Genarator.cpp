#include<iostream>
#include<ctime>
int main(){
    srand(time(NULL));
    int Random_number = rand();
    int Random_Dice = (rand()%6)+1; // size of random number 
    std::cout << Random_number <<" " << Random_Dice;
    return 0;
}