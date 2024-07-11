#include <stdio.h>
#include <string.h>

int main()
{
    char st[100];
    int stInd, lastInd;

    printf("\nEnter a string : ");
    gets(st);

    printf("Enter starting index : ");
    scanf("%d", &stInd);

    printf("Enter ending index : ");
    scanf("%d", &lastInd);
    
    for(int i=stInd; i<=lastInd; i++)
    {
        if (stInd>strlen(st) || lastInd>strlen(st)) 
        {
            printf("Error : Index Out of bounds.");
            return 0;
        }  

        if(st[i]>='a' && st[i]<='z') st[i] -= 32; 
    }

    printf("Final String : %s", st);

    return 0;
}