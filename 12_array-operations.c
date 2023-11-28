/*
12. Write a program to implement all operations in an array.(insertionion and deletion)
*/

#include <stdio.h>

// insert into array
void insertion(int arr[], int size, int index, int element)
{

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
}

// delete an item
void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 25, 42, 12}, n, element, index, size;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("1.insertion\n2.delete\nchoose your option:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("enter the element you want to insertion:");
        scanf("%d", &element);
        printf("enter the index you want to insertion:");
        scanf("%d", &index);
        show(arr, size);
        insertion(arr, size, index, element);
        size += 1;
        show(arr, size);
        break;
    case 2:
        printf("enter the index you want to delete:");
        scanf("%d", &index);
        show(arr, size);
        deletion(arr, size, index);
        size -= 1;
        show(arr, size);
        break;

    default:
        printf("invalid choice");
        break;
    }
    return 0;
}