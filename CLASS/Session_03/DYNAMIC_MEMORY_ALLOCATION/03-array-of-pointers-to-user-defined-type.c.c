#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

void array_of_pointers_to_user_defined_types(void); 

int main(void)
{
    array_of_pointers_to_user_defined_types(); 
    return (EXIT_SUCCESS); 
}

void array_of_pointers_to_user_defined_types(void)
{
    int N = 4; 
    int i; 
    
    //  Step I : Declare pointer and make it NULL 
    struct Date** ppDate_arr = NULL; 

    //  Step II & III & IV: Allocate memory, Validation Check & Initialize - PART I 
    //  Allocate dynamic memory to array of pointers to struct Date

    ppDate_arr = (struct Date**)malloc(N * sizeof(struct Date*)); 
    if(NULL == ppDate_arr)
    {
        fprintf(stderr, "fatal:malloc():out of memory\n"); 
        exit(EXIT_FAILURE); 
    }

    memset(ppDate_arr, 0, N * sizeof(struct Date*)); 

    //  Allocate memory, Validation check  & initialize - PART II 
    for(i = 0; i < N; ++i)
    {
        ppDate_arr[i] = (struct Date*)malloc(sizeof(struct Date)); 
        if(NULL == ppDate_arr[i])
        {
            fprintf(stderr, "fatal:malloc():out of memory\n"); 
            exit(EXIT_FAILURE); 
        }

        memset(ppDate_arr[i], 0, sizeof(struct Date)); 
    }

    //  Step V: Write / Read 
    for(i = 0; i < N; ++i)
    {
        ppDate_arr[i]->day = 30 - i; 
        ppDate_arr[i]->month = 12 - i; 
        ppDate_arr[i]->year = 2000 + i; 
    } 

    for(i = 0; i < N; ++i)
    {
        printf("INSTANCE AT INDEX (%d) : %d / %d / %d\n:", 
            i, ppDate_arr[i]->day, ppDate_arr[i]->month, ppDate_arr[i]->year); 
    }

    //  Step VI: Release memory 
    for(i = 0; i < N; ++i)
    {
        free(ppDate_arr[i]); 
        ppDate_arr[i] = NULL; 
    }

    free(ppDate_arr); 
    ppDate_arr = NULL; 
}