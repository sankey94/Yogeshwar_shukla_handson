#include<stdio.h>   // for declaration of printf
#include<stdlib.h>  // for declaration of malloc free exit

void single_integer_allocation(void);

int main(void)
{
    single_integer_allocation();
    exit(0);
}

void single_integer_allocation(void)
{
    int* ptr = NULL;    //STEP I: Declare pointer initialized to NULL

    ptr = (int*)malloc (sizeof(int));   // STEP II: Allocate Memory

    ///Step III : Validation
    if(NULL == ptr)
    {
        fprintf(stderr,"fatal:malloc():out of memory\n");
        exit(EXIT_FAILURE);
    }

    //Step IV : Read/Write
    *ptr = 100;     //  Write Operation
    int n = *ptr;   //  Read Operation
    printf("n = %d\n", n);

    //Step V: Relaese memory and make pointer NULL
    free(ptr);
    ptr = NULL;
}
