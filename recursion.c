#include<stdio.h>

int fibo(); // function declaration
int facto(); // function declaration

int facto(int f)
{
    if (f <= 1){
        printf("Finished calculating factorial\n");
        return 1;
    };
    return f * facto(f-1);
}

// int main(){
//     int f;
//     printf("Enter an integer number ");
//     scanf("%d", &f);
//     // printf("The factorial of %d is %d \n", f, fibo(f));
//     printf("The fibonacci of %d is %d \n", f, fibo(f));
//     return 0;
// }

int fibo(int g)
{
    if (g==0){
        return 0;
    }
    if (g==1){
        return 1;
    }
    return fibo(g-1) + fibo(g-2);
}

int main()
{
    int g; // number of sequence to print
    printf("Enter an integer number ");
    scanf("%d", &g);

    int n;
    for (n=0; n<=g; n++)
    {
        printf("Numbers are: %d \n ", fibo(n));
    }
    return 0;
}