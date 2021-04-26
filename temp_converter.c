#include<stdio.h>

/*Using symbolic constants*/
#define lower -60
#define upper 300.0
#define step 20.0

int main()
{
    float fahr, celsius;
    
    // fahr = lower;
    printf("Fahrenheit to Celsius Conversion\n");
    printf("Fahrenheit\tCelsius\n");
    // while (fahr <= upper){
    //     celsius = 5.0 / 9.0 * (fahr - 32.0);
    //     printf("%3.0f\t|\t%6.1f\n", fahr, celsius);
    //     fahr += step;
    // }
    for (fahr =lower; fahr <= upper; fahr += step){
        celsius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f\t|\t%6.1f\n", fahr, celsius);
    }
}