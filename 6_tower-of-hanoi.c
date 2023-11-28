/*
6. Write a program that implements Tower of Hanoi problem by using a recursive function.
*/ 

/* TOWER (N, BEG, AUX, END)
Step 1: If N=1, then:
                Write: BEG->END
                Return
Step 2: Call TOWER (N-1, BEG, END, AUX)
Step 3: Write: BEG->END
Step 4: Call TOWER (N-1, AUX, BEG, END)
Step 5: Return.

*/ 

#include <stdio.h>

// these parameters means move n disks from beg to end rod using aux rod
void tower(int n, char beg, char aux, char end){
        if(n == 1){
            printf("move 1st disk %c to %c\n", beg, end);
            return;
        }
        // these parameters means move n-1 disks from beg to aux rod using end rod
        tower(n-1, beg, end, aux);
        printf("move %dth disk from %c to %c\n",n,beg,end);
        // these parameters means move n-1 disks from aux to end rod using beg rod
        tower(n-1,aux,beg, end);
}

int main(){
    int n;
    printf("enter number of disks:");
    scanf("%d", &n);

    tower(n, 'A','B', 'C');
    return 0;
}