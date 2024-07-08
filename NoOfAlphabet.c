#include <stdio.h>

int main()
{
    char st[100], stLen, alphCount=0;
    printf("Enter string : ");
    gets(st);

    for(int i=0; st[i]!='\0'; i++) 
        if((st[i]>='A' && st[i]<='Z') || (st[i]>='a' && st[i]<='z')) alphCount++;

    printf("No of alphabets : %d", alphCount);

    return 0;
}