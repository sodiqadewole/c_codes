#include <stdio.h> 
/*
Command line arguments are the arguments specified after the program name 
in the operating system's command line, and these arguments values are passed to 
your program at the time of execution from your operating system. For using this concept in
your program, you have to understand the complete declaration of how the main function works 
with this command-line argument to fetch values that earlier took no arguments with it (main() 
without any argument).

So you can program the main() is such a way that it can essentially accept two arguments where the
first argument denotes the number of command line arguments whereas the second argument denotes the 
full list of every command line arguments. This is how you can code your command line argument within 
the parenthesis of main():

int main ( int argc, char  *argv [ ] )

In the above statement, the command line arguments have been handled via main() function, and you have set the arguments where

argc (ARGument Count) denotes the number of arguments to be passed and
argv [ ] (ARGument Vector) denotes to a pointer array that is pointing to every argument that has been passed to your program.
You must make sure that in your command line argument, argv[0] stores the name of your program, similarly argv[1] gets the pointer 
to the 1st command line argument that has been supplied by the user, and *argv[n] denotes the last argument of the list.*/

int main( int argc, char *argv [] )
{
    printf(" \n Name of my Program %s \t", argv[0]);

    if( argc == 2 )
    {
        printf("\n Value given by user is: %s \t", argv[1]);
    }
    else if( argc > 2 )
    {
        printf("\n Many values given by users.\n");
    }
    else
    {
        printf(" \n Single value expected.\n");
    }
}

/*
The C99, previously known as the C9X, is an informal name for ISO/IEC 9899:1999 of C programming standard. It is the enhanced and newer version of C90 with added features for the language and the standard library and hence makes use of a better implementation of the available computer hardware such as the IEEE arithmetic and compiler technology.

The C99 standard introduces several new language features. These new features include:

Some features are like extensions to C90 offered by GNU compiler such as macros with a variable number of arguments.
C99 allows the use of sophisticated numbers and designated initializers.
Restricted pointers are also added in C99.
There are some new keywords and identifiers.
New comment techniques
Inline functions
Variable length array
Flexible array members
New header files were included
Addition of Compound Literals

 
As the official standard for C language was produced by ANSI (American National Standard Institute) in the year 1989, and then became an international standard in the year 1990, the specification of the C language remains relatively static for some time, with the evolving C++. The standard underwent further revision in the late 1990s, leading to the publication of ISO/IEC 9899:1999 in the year 1999, which was adopted as an ANSI standard in May 2000. So the C language defined by that version of the standard is commonly referred to as "C99".

The C99 standard incorporates new enhancements and included advanced features that are desirable for any modern computer language. Some of the features are borrowed from C++ while others are a modification of few constructs.

ANSI C has defined 32 keywords in C. C99 has added five more keywords to that old group of keywords. Addition of these new keywords is perhaps the most significant feature of C99. The new 5 keywords are:

_Bool: as the name suggests is of type integer which is used to declare Boolean type variables i.e. it can store only zeros (0s) and ones (1s). This is a new data type of C introduced by C99.

_Complex: It is used to declare complex floating type variables to store mathematical complex numbers. This is a new data type that is included in C99. They are declared as:

float _Complex variable_name;
double _Complex variable_name;
Example: float _Complex z = l + 2*J;
or it can also be declared as:

float complex z = l + 2*J;
z = l/z;
if the header file <complex.h> is included at the beginning of the program.

_Imaginary: It is used to declare imaginary floating type variables store mathematical imaginary numbers. This is also a new data type included by C99. It is declared like that of _Complex -

double _Imaginary variable_name;
float _Imaginary variable_name;
inline: The objective of the inline specifier is to supply a hint for the compiler to perform optimizations, such as function inlining, that require the definition of a function to be visible at the call site. The compilers can ignore the presence or absence of the inline specifier for the purpose of optimization.

static int g;

inline void k(void)
{
static int s = 1;
int x = g;
The above line is an error because the non-static inline function is accessing the static variable}
restrict: C99 has introduced the "restrict" keyword as a type qualifier that can be used only for pointers. A pointer when qualified with the keyword 'restricted' is referred to as a restricted pointer. Restricted pointers are declared as follows:

int *restrict pt;
void *restrict ptr1;
When a pointer is declared as restricted, it becomes the only means to access the object it points to.

It is legal to declare variables it at any point of the program within the curly braces of main() function.

#include<stdio.h>
#include <complex.h>

main()
{
   int g;
   g = 600;
    . . . 
    . . .  
   int k;   // Legal in C99
   k = 200;
   . . . 
}
In ANSI C, array dimension must have to be declared. But C99 permits declaration of array dimensions using integer variables or any valid integer expressions. This is called Variable length array.

This is how the variable length arrays are declared:

#include<stdio.h>
main()
{
   int x, y;
   scanf("%d %d", &x, &y);
   float matrix [x][y]; //Variable Length array    . . .
    . . . 
}
C99 allows to put comment using a double front slash (//) which is done in C++, and the C compiler does not show any error which was not possible in ANSI C.

*/