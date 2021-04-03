// An array can be 1-d, 2-d and multidimensional

#include<stdio.h>

int main()
{
    // type arrName[size]
    double amount[5]; // declaration
    int age[5] = {22,5,30,32,12};
    printf("Size of array is: %ld\n", sizeof(age));
    printf("Size of array is: %ld\n", sizeof(amount));


    // int myArray[5];
    // int n = 0;

    // // Initializing elements of array seperately
    // for(n=0; n<sizeof(myArray)/sizeof(myArray[0]); n++)
    // {
    // myArray[n] = n; 
    // }
    // printf("%ls\n", myArray);
    return 0;

}