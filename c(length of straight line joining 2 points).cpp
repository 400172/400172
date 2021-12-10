#include "stdio.h" 
#include "math.h"

int main( )
{
     float x1, y1, x2, y2, lin_len;  /* (x1,y1) and (x2,y2) are co-ordinates of two points */ 
     printf("\n\n Enter x-co-ordinate of first point: ");
     scanf("%f", &x1);
      printf("\n Enter y-co-ordinate of first point: ");
     scanf("%f", &y1);
     printf("\n\n Enter x-co-ordinate of second point: ");
     scanf("%f", &x2);
     printf("\n Enter y-co-ordinate of second point: ");
     scanf("%f", &y2);
      lin_len = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));   
      printf("\n The length of the straight line joining the two points is %f", lin_len); 
      return 0;
      }
