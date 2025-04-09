#include <stdio.h>

int main (){

   int i, j, k;
   
   for(i = 1; i <= 3; i++){
      
      for(j = 1; j <= 3; j++){
         if (i == j)
         goto label1;
         
         for (k = 1; k <= 3; k++){
            if (k == j || k == i)
               goto label2;
            
            printf("%d %d %d \n", i,j,k);
            
            label2: ;
         }
         label1: ;
      }
   }
   return 0;
}
