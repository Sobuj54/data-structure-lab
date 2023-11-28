/*
13. perform linked list insertion and deletion operation.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// insert at first
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// insert at an index
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// insert at end
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;

    return head;
}

struct node *insertAfterNode(struct node *previousNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = previousNode->next;
    previousNode->next = ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 50;
    third->next = NULL;

    linkedListTraverse(head);
    // insert at first
    head = insertAtFirst(head, 10);
    linkedListTraverse(head);

    // insert at an index
    head = insertAtIndex(head, 80, 2);
    linkedListTraverse(head);

    // insert at end
    head = insertAtEnd(head, 25);
    linkedListTraverse(head);

    // insert after a node
    insertAfterNode(second, 60);
    linkedListTraverse(head);
    return 0;
}