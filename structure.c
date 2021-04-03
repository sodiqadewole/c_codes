/*structure is like a dictionary of arrays used to store a collection of different kinds of obj*/

#include<stdio.h>
#include<string.h>

// struct Courses
// {
//     char website[50];
//     char subject[50];
//     int price;
// };

// void main()
// {
//     struct Courses C;

//     // initialization
//     strcpy(C.website, "www.sodiq.in");
//     strcpy(C.subject, "The C programming language");
//     C.price = 100;

//     // print
//     printf("Website : %s\n", C.website);
//     printf("Subject : %s\n", C.subject);
//     printf("Price : $%d\n", C.price);
// }

typedef union Courses
{
    char website[50];
    char subject[50];
    int price;
} uni;

void main()
{
    uni Courses;

    // initialization
    strcpy(Courses.website, "www.sodiq.in"); // string copy (dest, source)
    strcpy(Courses.subject, "The C programming language");
    // C.website = "www.sodiq";
    // C.subject = "This subject";
    Courses.price = 100;

    // print
    printf("Website : %s\n", Courses.website);
    printf("Book title : %s\n", Courses.subject);
    printf("Book Price : $%d\n", Courses.price);
}