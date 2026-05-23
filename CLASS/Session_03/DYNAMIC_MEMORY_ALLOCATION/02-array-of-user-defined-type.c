#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

void array_of_user_defined_type(void); 

int main(void)
{
    array_of_user_defined_type(); 
    return (0); 
}

void array_of_user_defined_type(void)
{
    //  Step I: Define pointer to store base address of array and make it NULL 
    struct Date* pDate_arr = NULL; 
    int i; 

    //  Step II: Allocate memory 
    pDate_arr = (struct Date*)malloc(4 * sizeof(struct Date)); 

    //  Step III : Validation check 
    if(NULL == pDate_arr)
    {
        fprintf(stderr, "fatal:malloc():out of memory\n"); 
        exit(EXIT_FAILURE); 
    }

    //  Step IV: Initialization 
    memset(pDate_arr, 0, 4 * sizeof(struct Date)); 

    //  Step V : Read / Write 
    for(i = 0; i < 4; ++i)
    {
        pDate_arr[i].day = 30 - i; 
        pDate_arr[i].month = 12 - i; 
        pDate_arr[i].year = 2000 + i; 
    }

    for(i = 0; i < 4; ++i)
    {
        printf("DATE INSTANCE AT INDEX (%d): %d / %d / %d\n",
            i, pDate_arr[i].day, pDate_arr[i].month, pDate_arr[i].year); 
    }

    //  Step VI: Release memory and make pointer NULL 
    free(pDate_arr); 
    pDate_arr = NULL; 
}