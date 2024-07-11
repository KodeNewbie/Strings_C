#include <stdio.h>

int main()
{
    char st[100], ch;

    printf("\nEnter a string : ");
    gets(st);
    
    for(int i=0; st[i]!='\0'; i++)
    {
        if(st[i]==' ') 
        {
            for(int j=i; st[j]!='\0'; j++) 
            {
                st[j] = st[j+1];
            }
            i--;
        }    
    }

    printf("Final String without spaces : %s", st);

    return 0;
}