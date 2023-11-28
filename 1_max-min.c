/*
1. write a C program to find the maximum and minimum values from the give array.
*/

#include <stdio.h>

int main(){
    int arr[100],n,max,min;
    printf("enter array length:");
    scanf("%d",&n);

    printf("enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",  &arr[i]);
    }

    max=min=arr[0];
    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }

        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("max = %d\nmin = %d\n", max,min);
    return 0;
}