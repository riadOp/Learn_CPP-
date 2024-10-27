#include<iostream>

int main(){
    int Unsorted[]={10,1,3,4,2,6,7,5,9,8};
    int size = sizeof(Unsorted) / sizeof(int);

    for(int i = 0; i<size-1 ; i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            if(Unsorted[j]>Unsorted[j+1]){
                int temp = Unsorted[j+1];
                Unsorted[j+1] = Unsorted[j];
                Unsorted[j] = temp;
            }
        }
    }
    std::cout << "Sorted Array : \n";
    for(int i = 0 ; i<size ; i++){
        std::cout <<"Element " << i+1 <<" = " << Unsorted[i] <<'\n';
    }
    return 0;
}