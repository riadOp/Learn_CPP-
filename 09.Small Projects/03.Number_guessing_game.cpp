#include<iostream>
#include<ctime>
#ifdef _WIN32 
#include<windows.h>
#else
#include <unistd.h>   // For usleep (for Linux and MacOS)
#endif

int main(){
    srand(time(NULL));
    int Count = 10,num = (rand()%200+1),Gnum; 
    std::cout <<"**********************Guess The Number**************************\n";
    std::cout  << "Tryies left  : " << Count <<'\n';
    std::cout<<"                                                                   \n";
    std::cout << "Enter your guess : ";
    std::cin >> Gnum;
    Count--;

    if(Gnum==num){
        std::cout << "You win !!!";
    }else{
        for(int i =1 ; i<10 ; i++){
            std::cout << "Wrong guess !!\n";
            std::cout <<"                                             \n";
            std::cout  << "Tryies left  : " << Count <<'\n';
            std::cout<<"                                                                   \n";
            std::cout << "Enter your guess again  : ";
            std::cin >> Gnum;
            if(Gnum==num){
                std::cout << "You win !!";
                break;
            }else if(Gnum>num){
                std::cout << "*******************************************\n";
                std::cout <<"                                             \n";
                std::cout <<"Hints ~~ Number is smaller than your guess ! \n";
                std::cout <<"                                             \n";
                std::cout << "*******************************************\n";
                std::cout <<"                                             \n";
                Count--;
            }else if(Gnum<num){
                std::cout << "*******************************************\n";
                std::cout <<"                                             \n";
                std::cout <<"Hints~~Number is larger than your guess !\n";
                std::cout <<"                                             \n";
                std::cout << "*******************************************\n";
                std::cout <<"                                             \n";
                Count--;
            }
        }
    }
    if(Count<1){
        std::cout <<"                                             \n";
        std::cout <<"                                             \n";
        std::cout << "Out of tries !!";
        std::cout <<"                                             \n";
        std::cout <<"                                             \n";
        std::cout <<"The number was = " <<num;
        std::cout <<"                                             \n";
        std::cout << "*******************************************\n";
    }
    

    return 0;
}