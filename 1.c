/**
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 **/
#include <stdio.h>

int main() {
    int counter = 999;
    int sum = 0;
    
for (counter; counter != 0; counter--) {
    if (counter % 3 == 0 || counter % 5 == 0) {
        sum += counter;
    }

printf ("%d\n", sum);
}
return 0;
}

/**
*	ANSWER: 233168
**/