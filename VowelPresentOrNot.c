#include <stdio.h>

int main()
{
    char st[100], stLen, alphCount=0;
    printf("Enter string : ");
    gets(st);

    for(int i=0; st[i]!='\0'; i++) 
        if(st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' || st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
        {
            printf("Vowel Present");
            return 0;
        }  

    printf("Vowel NOT Present");
    return 0;
}

