#include<iostream>

int main(){
    int *pNum = NULL;

    pNum = new int;
    *pNum = 10 ;

    std::cout <<"Address : " <<pNum <<std::endl;
    std::cout <<"Value : "<<*pNum <<std::endl; 
   
   delete pNum;
    return 0;
}