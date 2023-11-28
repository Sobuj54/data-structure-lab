/*
3. Write a program to search an element in an array using binary search algorithm.
*/ 

/* Algorithm :
Step 1:  Set BEG: = LB, END: = UB and MID = INT ((BEG + END)/2) 
Step 2: Repeat steps 3 and 4 while BEG≤END and DATA[MID]≠ITEM.
Step 3: If ITEM<DATA[MID], then:
        Set END: =MID-1
        Else:
        Set BEG: =MID+1
Step 4: Set MID: =INT((BEG+END)/2)
Step 5: If DATA [MID] = ITEM, then:
        Set LOC: =MID
        Else:
        Set LOC: = NULL
Step 6: Exit

*/ 

#include <stdio.h>

int main(){
    int beg,end,mid,arr[50],n,search;
    printf("enter size of the array :");
    scanf("%d", &n);

    beg=0;
    end=n-1;
    mid= (beg + end)/2;

    printf("enter array elements :");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter the element you want to search : ");
    scanf("%d", &search);

    while(beg <= end && arr[mid] != search){
        if(search < arr[mid]){
            end = mid - 1;
        }
        else{
            beg = mid + 1;
        }
        mid = (beg + end) / 2;       
    }

    if(search == arr[mid]){
        printf("match found at location %d", mid + 1);
    }
    else{
        printf("no match found");
    }
    return 0;
}