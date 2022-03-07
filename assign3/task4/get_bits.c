#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// Note, the bits are counted from right to left. 
// Return the bit states of x within range of [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
unsigned * get_bits(unsigned x, unsigned start, unsigned end) {
    unsigned *a = malloc(sizeof(unsigned)*32);
    unsigned *temp = malloc(sizeof(unsigned)*32);
    for(int z = 0; z < 32; z++){
      if(x%2 == 0){
        temp[z] = 0;
        x = x / 2;
      }else {
        temp[z] = 1;
        x = x / 2;
      }
    }
    int counter = 0;
    for(int c = start; c <= end; c++){
      a[counter] = temp[c];
      counter++;
    }
    
   return a;
    // YOUR CODE HERE
    // Returning NULL is a placeholder
    // get_bits dynamically allocates an array a and set a[i] = 1 when (i+start)-th bit of x is 1, otherwise set a[i] = 0;
    // At last, get_bits returns the address of the array.
}
