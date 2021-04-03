/*structure is like a dictionary of arrays used to store a collection of different kinds of obj*/

#include<stdio.h>
#include<string.h>

struct Courses
{
    char website[50];
    char subject[50];
    int price;
};

void main()
{
    struct Courses C;

    // initialization
    strcpy(C.website, "www.sodiq.in");
    strcpy(C.subject, "The C programming language");
    C.price = 100;

    // print
    printf("Website : %s\n", C.website);
    printf("Subject : %s\n", C.subject);
    printf("Price : $%d\n", C.price);
}