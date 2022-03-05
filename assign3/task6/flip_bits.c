#include <stdio.h>
#include <stdlib.h>

void flip_bits(unsigned * x, unsigned start, unsigned end) {
  int range = end - start;
  for(int i = 0; i <= range; i++){
    *x ^= (1 << (start + i));
  }
}