#include <stdio.h>

#define SQR(x) ((x) * (x))

int main()
{
    float y = 1;
    float z = 1.0/SQR(y + 1)
    ;
    printf("z = %f\n", z);
    return 0;
}