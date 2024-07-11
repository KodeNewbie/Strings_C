#include <stdio.h>

int main()
{
    char st[100], ch;

    printf("Enter a string : ");
    gets(st);

    printf("Enter the character you want removed : ");
    scanf("%c", &ch);
    
    for(int i=0; st[i]!='\0'; i++)
    {
        if(st[i]==ch) 
        {
            for(int j=i; st[j]!='\0'; j++) 
            {
                st[j] = st[j+1];
            }
            i--;
        }    
    }

    printf("Final String : %s", st);

    return 0;
}