#include <stdio.h>

int main()
{
    char st[100], vowel=0, consonant=0, digit=0, spCh=0;
    printf("Enter string : ");
    gets(st);

    for(int i=0; st[i+1]!='\0'; i++) 
    {
        for(int j=i+1; st[j]!='\0'; j++)
        {
            if(st[i]>st[j])
            {
                char temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }

    printf("Sorted String : %s", st);

    return 0;
}