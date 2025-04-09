#include <stdio.h>
int main(){
   int i = 0;
   START:
      i++;
      printf("i: %d\n", i);
      if (i == 5)
         goto END;
      goto START;
   END:
      printf("End of loop");
   return 0;
}
