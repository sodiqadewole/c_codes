/* program to convert from miles to kilometers
*/
#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;

    printf("Enter measurement in miles: ");
    scanf("%d", &miles);
    printf("Enter measurement in yards: ");
    scanf("%d", &yards);

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers. \n\n", kilometers);
    return 0;

}