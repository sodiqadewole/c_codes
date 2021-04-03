/*This program uses the switch case operation in C*/
#include<stdio.h>

int main()
{
    int number;
    printf("Please enter a numeber between 1 and 5: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:/* constant-expression */
        printf("You entered One\n");/* code */
        break;

    case 2:/* constant-expression */
        printf("You entered Two\n");/* code */
        break;

    case 3:/* constant-expression */
        printf("You entered Three\n");/* code */
        break;

    case 4:/* constant-expression */
        printf("You entered Four\n");/* code */
        break;

    case 5:/* constant-expression */
        printf("You entered Five\n");/* code */
        break;

    default:
        break;
    }

    return 0;
}