/*
5. Write a program to calculate factorial fo a number using recursion.
*/ 

#include <stdio.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    printf("enter the number :");
    scanf("%d", &n);

    printf("%d", fact(n));
    return 0;
}