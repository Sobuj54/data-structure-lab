/*
4. Write a program to determine n fibonacci numbers using recursion.
*/ 

#include <stdio.h>

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int n;
    printf("enter n fibonacci number : ");
    scanf("%d", &n);

    for(int i = 0; i<n ;i++){
        printf("%d\t", fib(i));
    }

    // this gives us nth fibonacci number
    printf("\n%dth fibonacci number is %d\n",n,fib(n-1));
    return 0;
}