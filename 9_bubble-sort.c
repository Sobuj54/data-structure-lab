/*
9. Write a program to sort an array using bubble sort algorithm.
*/ 

/*
step 1: Repeat for i=1 to N.
            Repeat for j=1 to N-i-1
                if(arr[j] > arr[j+1]), then:
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
step 2: Write arr.
step 3: Exit.
*/ 

#include <stdio.h>

int main(){
    int arr[50],n,temp;
    printf("enter size of the array :");
    scanf("%d",  &n);

    printf("enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}