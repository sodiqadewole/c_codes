/* program to convert from Fahrenheit to Celsius
*/
#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    printf("Enter your fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8; 
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
    return 0;
}