/*
11. Write a program to implement first pattern matching algorithm.
*/

/*
Step 1: Set K:=1 and MAX:= S-R+1
Step 2: Repeat steps 3 to 5 while K≤MAX:
Step 3: Repeat for L=1 to R:
            If P[L] ≠ T[K+L-1], then: Go to step 5
Step 4: Set INDEX = K, and Exit
Step 5: Set K: =K+1
Step 6: Set INDEX = 0
Step 7: Exit.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char text[20], pattern[20];
    int patternLen, textLen;
    printf("enter text:");
    gets(text);
    printf("enter pattern:");
    gets(pattern);

    textLen = strlen(text);
    patternLen = strlen(pattern);
    int max = textLen - patternLen;

    for (int i = 0; i <= max; i++)
    {
        int j;
        for (j = 0; j < patternLen; j++)
        {
            if (text[j + i] != pattern[j])
                break;
        }

        if (j == patternLen)
        {
            printf("match found at location %d", i + 1);
        }
        else
        {
            printf("no match found");
        }
    }
    return 0;
}
