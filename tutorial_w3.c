// #include<stdio.h> 

// int main() {
//     printf("Hello World!\n");
//     getchar();
//     return 0;
//  }

// void main(){
//     char title;
//     title = getchar();
//     putchar(title);
//     putchar('\n');
//     // printf("age is %c\n", title);
//     return;
// }

// int collect_age()
// {
//     int age;
//     printf("Enter age integer: ");
//     scanf("%d", &age);
//     printf("age is %d\n", age);
//     return 0;
// }

// int main()
// {
//     int var1;
//     printf("Enter integer: ");
//     scanf("%4d", &var1);
//     printf("You entered %d\n", var1);
//     return 0;
// }

// main()
// {
//   int a = 15, b = 20;

//   if (b > a) {  
//     printf("b is greater");
//   }
// }

// int main()
// {
//   int number;
//   printf("Type a number: ");
//   scanf("%d", &number);

//   /* check whether the number is negative number */  if (number < 0) {
//     /* If it is a negative then convert it into positive. */   
//     number = -number;  
//     printf("The absolute value is %d\n", number);
//   }
//   getchar();
// } 

// void main()
// {
//    int age;

//    g: //label name
//      printf("you are Eligible\n");
//    s: //label name
//      printf("you are not Eligible\n");

//    printf("Enter you age:");
//    scanf("%d", &age);
//    if(age>=18)
//         goto g; //goto label g
//    else
//         goto s; //goto label s
// // getch();
// }

// main()
// {
//     int a;
//     printf("Please enter a no between 1 and 5: ");
//     scanf("%d",&a);
    
//     switch(a)
//     {
//     case 1:
//     printf("You chose One\n");
//     break;
    
//     case 2:
//     printf("You chose Two\n");
//     break;

//     case 3:
//     printf("You chose Three\n");
//     break;

//     case 4:
//     printf("You chose Four\n");
//     break;

//     case 5:
//     printf("You chose Five.\n");
//     break;

//     default :
//     printf("Invalid Choice. Enter a no between 1 and 5");
//     break;
//     }

// } 

#include<stdio.h>
#include"swap.h"

int main()
{
    int a = 20;
    int b = 30;
    swap(&a, &b);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}