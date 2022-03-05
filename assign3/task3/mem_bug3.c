#include <stdio.h>
#include <stdlib.h>

void set_bits(unsigned * x, unsigned start, unsigned end, unsigned *v) {

  for(int i = end; i <= start; i--){
     if(v[i] == 0){
       x[i]=0;
     } else{ 
       x[i]=1;
     }
  }
    
}

