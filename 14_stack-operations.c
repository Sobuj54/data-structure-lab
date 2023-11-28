/*
14. stack operations
*/

/*
PUSH (STACK, TOP, MAXSTK, ITEM)
This procedure pushes an ITEM onto a stack
Step 1: If TOP = MAXSTK, then:
                        Print: OVERFLOW and Return.
Step 2: Set TOP: = TOP+1
Step 3: Set STACK[TOP]: = ITEM

POP (STACK, TOP, ITEM)
This procedure deletes the top element of STACK and assigns it to the variable ITEM. Step 1: If TQP = 0, then:
                Print: UNDERFLOW and Return
Step 2: Set ITEM: = STACK[TOP].
Step 3: Set TOP: =TOP-1 [Decreases TOP by 1]
Step 4: Return.

*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    // -1 means empty
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push  operation
int push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        return ptr->top;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("underflow");
    }
    else
    {
        ptr->top--;
        return ptr->top;
    }
}

int main()
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size = 10;
    ptr->top = -1;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));

    ptr->top = push(ptr, 10);
    ptr->top = push(ptr, 20);
    ptr->top = pop(ptr);
    ptr->top = push(ptr, 30);

    for (int i = ptr->top; i >= 0; i--)
    {
        printf("%d  ", ptr->arr[i]);
    }
}
