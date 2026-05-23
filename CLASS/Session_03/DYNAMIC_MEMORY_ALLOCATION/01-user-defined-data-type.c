#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Date 
{
    int day;
    int month;
    int year;
};

int main(){
    user_defined_type();
    return (EXIT_SUCCESS);
}

void user_defined_type(void)
{
    //  Step-I: Declare pointer and make it NULL 
    struct Date* pDate = NULL; 

    //  Step II: Allocate memory 
    pDate = (struct Date*)malloc(sizeof(struct Date)); 

    //  Step III: Memory allocation validation check 
    if(NULL == pDate)
    {
        fprintf(stderr, "fatal:malloc():out of memory\n"); 
        exit(EXIT_FAILURE); 
    }

    //  Step IV: 
    memset(pDate, 0, sizeof(struct Date)); 

    //  Step V: Read / Write 
    pDate->day = 16; 
    pDate->month = 5; 
    pDate->year = 2026; 

    int dd = pDate->day; 
    int mm = pDate->month; 
    int yy = pDate->year; 

    printf("%d / %d / %d\n", dd, mm, yy); 

    //  Step VI: 
    free(pDate); 
    pDate = NULL; 
}
