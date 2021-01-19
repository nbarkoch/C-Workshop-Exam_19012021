// C_exam_1.c : This file contains the 'main' function. Program execution begins and ends there.
// 206295305 naor bar kochva
#include <stdio.h>
#include "Stack.h"


/**
* @file Main.c
* running all functions 
*/
int main()
{
    printf("Hello World!\n");
    Stack *stack11 = CreateStack();
    Node a, b, c, d;
    a.value = 1;
    b.value = 2;
    c.value = 3;
    d.value = 4;
    StackPush(&stack11, &a);
    StackPush(&stack11, &b);
    StackPush(&stack11, &c);
    StackPush(&stack11, &d);
    DeleteStack(&stack11);
}