#include "foverload.hpp"

int max(int a, int b)
{
    if(a >= b) return a;
    else return b;
}

int max(int *a, int b)
{
    if(*a >= b) return *a;
    else return b;
}

int max(int x, int y, int z) {
    int max = x; /* assume x is the largest */
    
    if (y > max) { /* if y is larger than max, assign y to max */
        max = y;
    }
    
    if (z > max) { /* if z is larger than max, assign z to max */
        max = z;
    }
    
    return max; /* max is the largest value */
} /* end function maximum */

int max(float a, int b)
{
    if(a >= b) return a;
    else return b;
}

int max(int a, float b)
{
    if(a >= b) return a;
    else return b;
}