#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct Stack{
    char info[5];
    int top;
};
bool isFull(Stack S);
bool isEmpty(Stack S);
void createStack(Stack &S);
void push(Stack &S,char X);
void pop (Stack &S);
void viewStack(Stack S);
#endif // STACK_H_INCLUDED
