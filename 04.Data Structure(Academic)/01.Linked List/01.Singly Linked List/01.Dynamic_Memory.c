#include<stdio.h>
#include<stdlib.h>

int main(){
    //Dynamically allocating memory using malloc()
    int *a ,*b;
    a = (int*)malloc(sizeof(int));
    b = (int*)malloc(sizeof(int));
    *a = 10;
    b[1] = 15;
    if(a != NULL && b!= NULL){
        printf("Value of a %d\nValue of b %d\n",*a,b[1]);
    }else{
        printf("Memory alloocation Failed\n");
    }

    //Dynamically Allocating memory using Calloc()
    float *m ;
    m = (float*)calloc(2,sizeof(float));
    * m = 2.144;
    m[1] = 3.1224;
    if(m != NULL){
        printf("Value of m : %f && %f\n",*m,m[1]);
    }else{
        printf("Memory Allocation Failed\n");
    }

    //Dynamically deallocate memory usinf free();
    free(m);
    if(m == NULL){
        printf("Memory Deallocated Succesfully\n");
    }else{
        printf("Memory Not Deallocated Succesfully\n");
        printf("Value of m : %f && %f\n",*m,m[1]);
    }

    //Dynamically Reallocate memory using realloc()
    int *n;
    n = (int*)calloc(2,sizeof(int));
    for(int i = 0 ; i<2 ;i++){
        n[i] = i ;
    }
    printf("Out of space\n");
    n = (int*)realloc(n,4*sizeof(int));
    for(int i = 2 ; i<4 ;i++){
        n[i] = i;
    }
    for(int i = 0 ; i<4 ;i++){
        printf("%d->",n[i]);
    }
    return 0;
}