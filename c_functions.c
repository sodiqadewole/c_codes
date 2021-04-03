/*Functions in C*/
#include<stdio.h>

/*call by value*/
int addition(); /*function declaration*/

int main()
{
    int input1, input2;
    printf("enter any integer: ");
    scanf("%d", &input1);
    printf("enter another integer: ");
    scanf("%d", &input2);

    int ans; /*local variable*/
    ans = addition(input1, input2); /*calling function*/
    printf("The addition of the two inputs are: %d\n", ans);
    return 0;
}

int addition(int input1, int input2)
{
    return input1 + input2;
}

/*Call by reference*/
// int addition(int *input1, int *input2); /*function declaration*/

// int main()
// {
//     int input1, input2;
//     printf("enter any integer: ");
//     scanf("%d", &input1);
//     printf("enter another integer: ");
//     scanf("%d", &input2);

//     int ans; /*local variable*/
//     ans = addition(&input1, &input2); /*calling function*/
//     printf("The addition of the two inputs are: %d\n", ans);
//     return 0;
// }

// int addition(int *input1, int *input2)
// {
//     return *input1 + *input2;
// }