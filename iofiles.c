/*
- Declare a file pointer variable
- Open a file using fopen() function
- Process the file using the suitable function
- Close the file using fclose() function
*/

// C fopen is a C library function used to open an existing file or create a new file.
#include<stdio.h>

// int main()
// {
//     FILE *fp;
//     fp = fopen("fileName.txt", "w");
//     fprintf(fp, "%s", "Sample Texts");
//     fclose(fp);
//     return 0;
// }

// int main()
// {
//   FILE *fp = fopen("fileName.txt", "r");
//   int ch = getc(fp);
//   while (ch != EOF)
//   {
//     /* To display the contents of the file on the screen */    putchar(ch);
 
//     ch = getc(fp);
//   }
   
//   if (feof(fp))
//      printf("\nReached the end of file.");
//   else
//      printf("\n Something gone wrong.");
//   fclose(fp);
     
//   getchar();
//   return 0;
// }

// int main (void)
// {
//   FILE * fileName;
//   char ch;
//   fileName = fopen("anything.txt","wt");
//   for (ch = 'D' ; ch <= 'S' ; ch++) {
//     putc (ch , fileName);
//     }
//   fclose (fileName);
//   return 0;
// }
// C getw function is used to read an integer from a file
// C putw function is used to write an integer to the file

// int main (void)
// {
//    FILE *fileName;
//    int i=2, j=3, k=4, n;
//    fileName = fopen ("anything.c","w");
//    putw(i, fileName);
//    putw(j, fileName);
//    putw(k, fileName);
//    fclose(fileName);
 
//    fileName = fopen ("anything.c","r");
//    while(getw(fileName) != EOF)
//    {
//       n= getw(fileName);
//       printf("Value is %d \t: ", n);
//    }
//    fclose(fileName);
//    return 0;
// }

/* C fprintf function pass arguments according to the specified format to the file 
indicated by the stream. This function is implemented in file related programs for writing formatted data in any file.*/

// int main (void) 
// {
//    FILE *fileName;
//    fileName = fopen("anything.txt","r");
//    fprintf(fileName, "%s %s %d", "Welcome", "to",  2018);
//    fclose(fileName);
//    return 0;
// }

/*C fscanf function reads formatted input from a file. This function is implemented 
in file related programs for reading formatted data from any file that is specified in the program.*/

int main()
{
    char str1[10], str2[10];
    int yr;
    FILE* fileName;
    fileName = fopen("anything.txt", "w+");
    fputs("Welcome to", fileName);
    rewind(fileName);
    fscanf(fileName, "%s %s %d", str1, str2, &yr);
    printf("----------------------------------------------- \n");
    printf("1st word %s \t", str1);
    printf("2nd word  %s \t", str2);
    printf("Year-Name  %d \t", yr);
    fclose(fileName);
    return (0);
}
/*C fgets function is implemented in file related 
programs for reading strings from any particular file. It gets the strings 1 line each time.*/

void main(void)
{
    FILE* fileName;
    char ch[100];
    fileName = fopen("anything.txt", "r");
    printf("%s", fgets(ch, 50, fileName));
    fclose(fileName);
}

// C fputs function is implemented in file related programs for writing string to any particular file.

int main()
{
FILE *fp;
fp = fopen("fileName.txt","w");

fputs("This is a sample text file.", fp);
fputs("This file contains some sample text data.", fp);

fclose(fp);
return 0; 
}

/*C feof function is used to determine if the end of the file (stream), 
specified has been reached or not. This function keeps on searching the end of file (eof) in your file program.*/

int main()
{ 
FILE *filee = NULL; 
char buf[50]; 
filee = fopen("infor.txt","r"); 
if(filee) 
    { 
         while(!feof(filee)) 
         { 
             fgets(buf, sizeof(buf), filee); 
             puts(buf); 
         } 
         fclose(filee); 
   } 
    return 0; 
}

/*C feof function returns true in case end of file is reached, otherwise it's return false.

It first tries to open a text file infor.txt as read-only mode.
Then as the file gets opened successfully to read, it initiates the while loop.
The iteration continues until all the statement/lines of your text file get to read as well as displayed.
Lastly, you have to close the file.*/


//Errors
/* Divided By zero Error i.e. Exception*/#include <stdio.h>
#include <stdlib.h>

void main() {
   int ddend = 60;
   int dsor = 0;
   int q;

   if( dsor == 0){
      fprintf(stderr, "Division by zero! Exiting...\n");
      getch();
      exit(-1);
   }
   q = ddend / dsor;
   fprintf(stderr, "Value of quotient : %d\n", q);
   getch();
   exit(0);
}

In C, you can state the size of your structure (struct) or union members in the form of bits. This concept is to because of efficiently utilizing the memory when you know that your amount of a field or collection of fields is not going to exceed a specific limit or is in-between the desired range.

Let us take a situation of C program, which contains a number having TRUE/FALSE variables clustered together in structure form name as decided:

struct {
  unsigned int haveTime;
  unsigned int haveSpace;
}
decided
The above structure involves 8-bytes of memory space, but you need to hold either 0 or 1 for each of the above variables. The C language presents an enhanced way of utilizing the memory space in such condition.

When implementing such variables within a structure, you can implicitly characterize the width of a variable that tells the compiler to exercise only that specific number of bytes. The above structure code snippet can be written associating bit field as:

struct {
  unsigned int haveTime: 1;
  unsigned int haveSpace: 1;
}
decided;
The above code snippet (structure program) involves 4 bytes of memory space for the status variable, but only 2 bits will be used for storing the values.

So in your above example, the structure has occupied 4 bytes of memory for a decided variable, but only 2 bits will be implemented for storing the values.

Variables that are defined using a predefined width or size are called bit fields. This bit field can leave more than a single bit. The format and syntax of bit-field declaration inside a structure is something like this:

struct {
  data - type[nameofmember]: width_of_Bit - field;
};
data-type: defines the data type which establishes how a bit-field's value will be represented and interpreted. The data type can be of simple integer, signed integer, or unsigned integer.

nameofmember: defines the name of the bit-field member within the structure

width_of_Bit-field: specifies the number of bits required in the bit-field. It is to be noted that the width of the bit-field should have to be lesser than or at least equal to the width of the specified type.

struct example_bitField {
  int val1;
  int val2;
};

struct example_bitField2 {
  int val1: 1;
  int val2: 1;
};

int main(void) {
  printf(" \n Size of memory engaged by example_bitField : %zu ", sizeof(struct example_bitField));
  printf(" \n Size of memory engaged by example_bitField2: %zu ", sizeof(example_bitField2));
  return 0;
}
Size of memory engaged by example_bitField : 8
Size of memory engaged by example_bitField2 : 4