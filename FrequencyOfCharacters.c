#include <stdio.h>
#include <string.h>

int main()
{
    char st[1000];

    printf("Enter the string : ");
    scanf("%s", &st);

    //finding frequency
    for(int i=0; i<strlen(st); i++)
    {
        int fCount=0, bCount=0;
        for(int j=0; j<strlen(st); j++)
        {
            if(st[i]==st[j] && i<j) fCount++;
            if(st[i]==st[j] && i>j) bCount++;
        }
        if (bCount==0) printf("%c occurs %d times\n", st[i], fCount+1);
        
    }

    return 0;
}