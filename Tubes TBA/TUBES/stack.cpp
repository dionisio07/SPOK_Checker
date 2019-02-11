#include"stack.h"

bool isEmpty(Stack S){
    if(S.top == -1){
        return true;
    }
    else{
        return false;
    }
};
bool isFull(Stack S){
    if(S.top == 5){
        return true;
    }
    else{
        return false;
    }
};
void createStack(Stack &S){
    if(isEmpty(S)){
        S.top = 0;
    }
};
void push(Stack &S,char X){
    if(!(isEmpty(S)&&!(isFull(S)))){
        S.info[S.top] = X;
        S.top++;
    }
    else{
        cout<<"Stack penuh atau kosong"<<endl;
    }
};
void pop (Stack &S){
    if(!(isEmpty(S))){
        S.top--;
    }
    else{
        cout<<"Stack kosong"<<endl;
    }
};
void viewStack(Stack S){

 };
