// Write a C program to check the
// given string contains a capital alphabet, small alphabet, special character and digit.

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool hasSpecialChar(char st[100])
{
    for(int i=0; st[i]!=0; i++)
    {
        if ((st[i]<'A' || st[i]>'Z') && (st[i]<'a' || st[i]>'z') && (st[i]<'0' || st[i]>'9')) return true;
    }
    return false;
}

bool hasDigits(char st[100])
{
    for(int i=0; st[i]!=0; i++) if (st[i]>='0' && st[i]<='9') return true;
    return false;
}

bool hasSmallChar(char st[100])
{
    for(int i=0; st[i]!=0; i++)  if (st[i]>='a' && st[i]<='z') return true;
    return false;
}


bool hasCapitalChar(char st[100])
{
    for(int i=0; st[i]!=0; i++)  if (st[i]>='A' && st[i]<='Z') return true;
    return false;
}

int main()
{
    char st[100];
    
    printf("Enter a string : ");
    gets(st);
    
    if(hasCapitalChar(st) && hasDigits(st) && hasSmallChar(st) && hasSpecialChar(st)) 
        printf("All are Present.");

    else printf("All NOT present.");
    return 0;
}