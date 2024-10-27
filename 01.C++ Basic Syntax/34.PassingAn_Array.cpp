#include<iostream>

int totalcal(int array[],int size);

int main(){
    int Hello [] = {1,2,3,4,5};
    int size = sizeof(Hello)/sizeof(int);
    int total = totalcal(Hello,size);
    std::cout <<"Sum = " << total <<std::endl;
    return 0;
}

int totalcal(int array[],int size){
    int total = 0;
    for(int i = 0 ; i< size ; i++){
        total=total + array[i];
    }
    return total;
}