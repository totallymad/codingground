#include <stdio.h>
main() {
    char c1= 110,
         c2= 't';
    printf("c1 = %d \n", c1);
    printf("c1 = %c \n", c1);
    printf("c2 = %d \n", c2);
    const int coef = 2016;
    double a = 1005.23125478965,
           b = 5.347;
    printf("A = %5.7f \n", a);
    printf("%7d \n", coef);
    printf("B =%7.1f \n", b);
}