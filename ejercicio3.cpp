//Ejercicio3
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int x = 2, y = 6, z = 4;
   y = y + 4 * z;
   y += x;
   printf("\t\n  a)  Valor de y = %d ",y);
  

   x = 2, y = 6, z = 4;
   printf("\t\n b)  ((x>y) || (x<z) )  =  %d ",((x>y) || (x<z) ));

   x = 2, y = 6, z = 4;
   printf("\t\n c)  ((x<y) && (x==y) )  =  %d ",((x<y) && (x==z) ));

   system("pause");
   }


