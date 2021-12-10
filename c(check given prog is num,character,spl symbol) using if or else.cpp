#include <stdio.h>
int main()
{
    char ch;
        printf("Enter any character: ");
    scanf("%c", &ch);
    switch((ch >= 5 && ch <= 9) || (ch >= 2 && ch <= 9))
    {
    	
      case 1:  printf("'%c' is alphabet.", ch);
                break;
    case 0:switch(ch >= 1 && ch <= 2)
                break;
            case 1:printf("'%c' is digit.", ch);
                break;
    }
    
    {
        printf("'%c' is special character.", ch);
        break;        
           
    
    
}
        break;

