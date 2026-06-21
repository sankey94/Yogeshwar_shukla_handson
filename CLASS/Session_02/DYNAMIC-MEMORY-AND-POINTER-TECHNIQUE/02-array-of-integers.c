#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void array_of_integer_allocation(void);

int main(void)
{
    array_of_integer_allocation();
    exit(0);
}

void array_of_integer_allocation(void)
{
    //  Step I: Declare pointer and initialize to NULL
    int *a = NULL;
    int N=8;

    //  Step II: Allocate Memory
    a = (int*)malloc(N * sizeof(int));

    //  Step III: Validation
    if(NULL == a)
    {
        fprintf(stderr, "fatal:malloc():out of memory");
        exit(EXIT_FAILURE);    
    }
    
    //  Step IV: Initialize block to zero
    memset(a, 0, sizeof(N * sizeof(int)));

    //  Step V: Read/Write
    int i;

    //  Write Operation
    for(i = 0; i < N; ++i)
    {
        *(a+i) = (i+1) * 100;

    }

    //  Read and display operation

    for(i = 0; i < N; ++i)
        printf("a[%d] : %d\n", 1, a[i]);

    
    //  Step VI: Release the array and make pointer NULL
    free(a);
    a = NULL;

}