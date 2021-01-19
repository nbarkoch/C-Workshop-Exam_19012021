
#include "Stack.h"
#include <stdio.h>



Stack *CreateStack()
{
    Stack *stack;
    stack = malloc(sizeof(Stack *));
    stack->root = NULL;
    return &stack;
}

void DeleteStack(Stack *stack)
{
    Node *itemIterator = stack->root;
    Node *nextNode;
    while (itemIterator != NULL)
    {
        nextNode = itemIterator->next;
        free(itemIterator);
        itemIterator = nextNode;
    }
    free(stack);
}

void StackPush(Stack *stack, Node *item)
{
    Node *newItem = (Node *)malloc(sizeof(Node *));
    newItem->value = (*item).value;
    newItem->next = (stack)->root;
    (stack)->root = newItem;
}



Node *StackPop(Stack *stack)
{
    Node *item = stack->root;
    stack->root = (stack->root)->next;
    return &item;
}

int StackGetLastError(Stack *stack)
{
    return stack->root == NULL;
}

unsigned StackSize(Stack *stack)
{
    Node *itemIterator = stack->root;
    unsigned count = 0;
    while (itemIterator != NULL)
    {
        ++count;
        itemIterator->next = itemIterator;
    }
}

void StackPrint(Stack *stack)
{
    Node *itemIterator = stack->root;
    while (itemIterator != NULL)
    {
        printf("%d->", itemIterator->value);
        itemIterator->next = itemIterator;
    }
}
