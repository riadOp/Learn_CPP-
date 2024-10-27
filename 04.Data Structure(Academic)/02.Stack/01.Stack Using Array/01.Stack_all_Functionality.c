#include<stdio.h>
#include<stdlib.h>

//Basic Stack Structure using Array
struct Stack{
    int Capacity ;
    int top ;
    int* Array;
};

//Creating a Stack of given Size
struct Stack* Creating(int Capacity){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->Array = (int*)malloc(stack->Capacity * sizeof(int));
    return stack;
}

//stack is Full or Not ??
int IsFull(struct Stack* stack){
    if(stack->top == stack->Capacity-1){
        return 1;
    }
    return 0;
}

//Stack is Empty or not
int IsEmpty(struct Stack* stack){
    if(stack->top == -1){
        return 1;
    }
    return 0;
}

//Pushing an Element 
int Push(struct Stack* stack,int value){
    if(IsFull(stack)){
        printf("Stack Overflow!!\n");
        return 0;
    }
    stack->top++;
    stack->Array[stack->top] = value;
    printf("%d is pushed successfully!!\n",value);
    return 1;
}

//Popping an Element 
int Pop(struct Stack* stack){
    if(IsEmpty(stack)){
        printf("Stack Underflow!!\n");
        return 0;
    }
    int val = stack->Array[stack->top];
    stack->top--;
    printf("%d is popped successfully!\n",val);
    return 1;
}

//Peek top element 
int Peek(struct Stack* stack){
    if(IsEmpty(stack)){
        return 0;
    }
    int val = stack->Array[stack->top];
    printf("Top/Letest added element is = %d",val);
    return 1;
}

//Printing all Element 
void Printing_Last_added_to_First(struct Stack* stack){
    if(IsEmpty(stack)){
        printf("No Element!!\n");
    }
    for(int i = stack->top ; i>=0 ; i--){
        printf("%dth addded element is %d \n",i+1,stack->Array[i]);
    }
}

//Printing stack
void Printing_First_Added_to_last(struct Stack* stack){
    if(IsEmpty(stack)){
        printf("No Element\n");
    }
    for(int i = 0 ; i<=stack->top ;i++){
        printf("%dth element was %d",i+1,stack->Array[i]);
    }
}

int main(){
    struct Stack* Stack_Pointer;
    int Capacity,Element;
    scanf("%d",&Capacity);
    Stack_Pointer = Creating(Capacity);//creating stack function.
    Printing_First_Added_to_last(Stack_Pointer);
    for(int i =1 ; i<=Capacity;i++){
        printf("Enter Element to Push to stack : ");
        scanf("%d",&Element);
        Push(Stack_Pointer,Element);//Pushing User Input ! 
    }
    Printing_Last_added_to_First(Stack_Pointer);
    Pop(Stack_Pointer);
    Printing_Last_added_to_First(Stack_Pointer);
    Peek(Stack_Pointer);
    return 0;
}