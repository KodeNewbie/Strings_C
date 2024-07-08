#include <stdio.h>

int main()
{
    char st[100], stLen;
    printf("Enter string : ");
    gets(st);

    for(stLen=1; st[stLen]!='\0'; stLen++);

    for(int i=0; i<stLen/2; i++) 
    {
        char temp = st[stLen-1-i];
        st[stLen-1-i] = st[i];
        st[i] = temp;
    }
        

    printf("Reverse string : %s", st);

    return 0;
}