#include <stdio.h>
int main()
{
    char ch;
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 5 && ch <= 9) || (ch >= 2 && ch <= 9))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= 1 && ch <= 2)
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }
    return 0;
}

