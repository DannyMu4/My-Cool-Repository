#include <stdio.h>
int main(void) 
{
   unsigned int x;
   for(x=1; x<=10;x++)
   {
      if(x==5){
         break;
      }
      printf("%u", x);
   }
printf("\nBroke Out of loop at X == %u\n", x);
printf("\n SAD");
return 0;
}
