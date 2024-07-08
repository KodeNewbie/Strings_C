#include <stdio.h>

int main()
{
    char st[100], vowel=0, consonant=0, digit=0, spCh=0;
    printf("Enter string : ");
    gets(st);

    for(int i=0; st[i]!='\0'; i++) 
    {
        if((st[i]>='A' && st[i]<='Z') || (st[i]>='a' && st[i]<='z'))
        {
            if(st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' || st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
                vowel++;
            
            else consonant++;
        }

        else if(st[i]>='0' && st[i]<='9') digit++;
        else spCh++;

    }

    printf("\nVowels : %d\nConsonants : %d\nDigits : %d\nSpecial Character : %d", vowel, consonant, digit, spCh);

    return 0;
}