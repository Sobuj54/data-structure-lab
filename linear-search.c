/*
2. write a C program to search an element from array using linear search.
*/ 

#include <stdio.h>

int main(){
    int  search, arr[50],n,loc;
    printf("enter array size:");
    scanf("%d", &n);

    printf("enter array elements :");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to find: ");
    scanf("%d", &search);

    for(int i=0; i<n ;i++){
        if(search == arr[i]){
            loc = i+1;
            break;
        }
    }
    if(loc){
        printf("Element found at loc %d\n",loc);
    }
    else{
        printf("No match found");
    }
}