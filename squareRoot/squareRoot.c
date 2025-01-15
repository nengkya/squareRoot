#include"stdio.h"
/*
malloc.h or stdlib.h is a must or there will be error in stdio.h scanf_s _ArgList
which is scanf_s looks for allocated space that provided by malloc(); that is inside malloc.h or stdlib.h

malloc.h is deprecated and Linux specific, on which it defines non-standard functions
*/
#include"malloc.h"
#include"math.h"

int main() {

    double * positiveValue = malloc(sizeof * positiveValue);

    printf("Enter a positive value: "); scanf_s("%lf", positiveValue);

    printf("The square root of %lf is %lf\n", *positiveValue, sqrt(*positiveValue));
    
}