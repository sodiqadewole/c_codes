/* program to size of types */
#include <stdio.h>

int main()
{
    int a=5;
    double avg=0.0;
    char ch='e';
    printf("On my system\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(ch));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("double is %lu bytes.\n", sizeof(long double));
    return 0;
}   