#include <stdio.h>
#include <string.h>

int main()
{
    char st1[100], st2[100];
    int count=0;

    printf("Enter the string 1 : ");
    scanf("%s", &st1);

    printf("Enter the string 2 : ");
    scanf("%s", &st2);

    for(int i=0; i<strlen(st1); i++) 
    {
       for(int j=0;j<strlen(st2);j++)
       {
           if(st1[i]==st2[j])
           {
               count++;
               break;
           }
       }
    }
    if(count==strlen(st1))
    {
        printf("Both string are anagram to each other");
    }
    else
    {
        printf("Both string are not anagram to each other");
    }
    return 0;
}
