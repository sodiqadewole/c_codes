/*This program executes loops in C*/
#include<stdio.h>

// void main()
// {
//     int count=0;
//     while (count < 10)
//     {
//         printf("Count is now %d\n", count); //statement
//         ++count; //incrementation
//     }
//     // return 0;

// }

/*do while loops*/
// void main()
// {
//     int number = 0;
//     do
//     {
//         printf("My name is do while %d\n", number);
//         number ++;
//     } while (number < 10);

    
// }

/*For loops*/
void main()
{
    int count;
    for (count = 0; count < 10; count++)
    {
        switch (count)
        {
        case 1:
            printf("I am the %dst for loop\n", count);
            break;

        case 2:
            printf("I am the %dnd for loop\n", count);
            break;
        
        case 3:
            printf("I am the %drd for loop\n", count);
            break;
        
        default:
            printf("I am the %dth for loop\n", count);
            break;
        }
        
    }
}