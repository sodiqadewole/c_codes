/* This program computes and outputs 
the sine value between 0 and 1
*/
#include<stdio.h>
#include<math.h>

int main()
{
    double deg, ret;
    printf("Enter an angle as a double: ");
    scanf("%lf", &deg);
    if(deg>=0 && deg<1){
        ret = sin(deg);
        printf("The sine of %lf is : %lf\n", deg, ret);
    }
    else {
        printf("Enter a value between 0 and 1 (non inclusive)");
    }
    
    return 0;

}
