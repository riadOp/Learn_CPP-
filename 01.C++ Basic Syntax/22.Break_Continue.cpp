#include<iostream>

int main(){
    std::cout << "Using Break : skip the rest after condition \n";
    for(int i=1 ; i<=5 ; i++){
        if(i==3){
            break;
        }else{
            std::cout << i << '\n'; 
        }
    }

    std::cout << "Using Continue : only skip the condition \n";
    for(int i = 1 ; i<= 5 ; i++){
        if (i==3){
            continue;
        }else{
            std::cout << i <<'\n';
        }


 }
    return 0;
}