/*Memory allocation in C*/

//malloc - used to allocate space in memory during execution of prog

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
int main()
{
    char *mem_alloc;
    mem_alloc = malloc(15 * sizeof(char));
    if (mem_alloc == NULL)
    {
        printf("Couldn't allocate requested memory\n");
    }
    else
    {
        strcpy(mem_alloc, "sodiq.in");
    }
    printf("Dynamically allocated memory content : %s\n", mem_alloc);
    free(mem_alloc);

}
*/

//calloc () function and malloc () are similar but calloc () allocates memory for zero-initialized var

// int main()
// {
//     char *mem_alloc;
//     mem_alloc = calloc(15, sizeof(char));
//     if (mem_alloc == NULL)
//     {
//         printf("Couldn't allocate requested memory\n");
//     }
//     else
//     {
//         strcpy(mem_alloc, "sodiq.in");
//     }
//     printf("Dynamically allocated memory content : %s\n", mem_alloc);
//     free(mem_alloc);
// }

// realloc: fns used to allocate mems

#include<stdio.h>
#include<string.h>
#include<stdlib.h>   

int main()
{
char *mem_alloc;
/* memory allocated dynamically */mem_alloc = malloc( 20 * sizeof(char) );

if( mem_alloc == NULL )
{      
printf("Couldn't able to allocate requested memory\n");
}
else
{      
strcpy( mem_alloc,"w3schools.in");
}

printf("Dynamically allocated memory content  : "  "%s\n", mem_alloc );
mem_alloc=realloc(mem_alloc,100*sizeof(char));

if( mem_alloc == NULL )
{      
printf("Couldn't able to allocate requested memory\n");
}
else
{      
strcpy( mem_alloc,"space is extended upto 100 characters");
}

printf("Resized memory : %s\n", mem_alloc );
free(mem_alloc);   
}
