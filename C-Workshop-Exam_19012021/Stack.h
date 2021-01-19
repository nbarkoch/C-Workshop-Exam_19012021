#pragma once

/**
* @file Stack.h
* running all functions from Stack.h
*/

/**
 * @brief a struct representing a node of a stack
*/
typedef struct Node_t
{
    int value;
    void *next;
} Node;

/**
 * @brief a struct stack
*/
typedef struct Stack_t
{
    Node *root;
} Stack;

/**
 * @brief a function that creates a new stack,
 * note: using allocation
 * @return the instance
*/
Stack *CreateStack();

void DeleteStack(Stack *stack);

/**
 * @brief a function that gets a stack and a new node and push it to the root
 * note: using allocation
 * @param stack
*/
void StackPush(Stack *stack, Node *item);



/**
 * @brief a function that pops the closed node to the root of the stac and returns it
 * @param stack
 * @return the poped item
*/
Node *StackPop(Stack *stack);

/**
 * @brief Get last error code (e.g. last pop failed because the stack was empty)
 * @param stack
 * @return
*/
int StackGetLastError(Stack *stack);


/**
 * @brief a function that get a stack and returns the size of it
 * @param stack the stack input
 * @return size
*/
unsigned StackSize(Stack *stack);


/**
 * @brief a function that prints the number of nodes in the stack
 * note: using print
 * @param stack the stack
*/
void StackPrint(Stack *stack);