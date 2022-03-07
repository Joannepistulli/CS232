#include <stdio.h>
#include <stdlib.h>

// Set the bits of x within range of [start, end], in which both are inclusive
// Assume 0 <= start & end <= 31
void set_bits(unsigned *x,
              unsigned start,
              unsigned end,
              unsigned *v)
{
    // array of at least (end-start+1) unsigned integers.
    unsigned *a = (unsigned *)malloc(sizeof(unsigned) * (end - start + 1));

    // v points to an array of at least (end-start+1) unsigned integers
    v = a;

    for (int i = start; i <= end; i++)
    {
        // if v[i] == 0
        if (v[i] == 0)
        {
            // set ( i + start)-th bit of x zero
            *x ^= i + start;
        }
        // otherwise
        else
        {
            // set(i + start) - th bit of x one
            *x ^= ~(i + start);
        }
    }
}