#include <stdio.h>
#include <string.h>

int main()
{
    char st1[100], st2[100], finalSt[100];

    printf("Enter 1st string : ");
    gets(st1);

    printf("Enter 2nd string : ");
    gets(st2);

    strcat(finalSt, st1);
    strcat(finalSt, st2);

    printf("Concat String : %s", finalSt);
    
    return 0;
}