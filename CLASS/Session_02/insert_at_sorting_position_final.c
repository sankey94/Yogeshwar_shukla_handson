#include <stdio.h>  //  Declaration of printf() 
#include <stdlib.h> //  Declaration of exit()

void show_array(int* a, int N, const char* msg); 

/* 
    The following function accepts array of N elements 
    with the following properties: 
    Property 1: N >= 2 
    Property 2: arr[0] to arr[N-2] are sorted in ascending order
*/
void insert_at_sorting_position(int* a, int N); 

int main(void)
{
    //  Define an array of 5 elements 
    int N = 5; 
    int arr[5] = {50, 60, 70, 80, 45};

    show_array(arr, N, "Before insert_at_sorting_position()"); 
    insert_at_sorting_position(arr, N); 
    show_array(arr, N, "After insert_at_sorting_position()"); 

    exit(0); 
}

void show_array(int* a, int N, const char* msg)
{
    puts(msg); 

    int i;  //  Index variable for looping 

    i = 0; 
    while(i < N)
    {
        printf("arr[%d] : %d\n", i, a[i]); 
        i = i + 1; 
    }
}

void insert_at_sorting_position(int* a, int N)
{
    int tmp = a[N-1];   //  Set element at last index of array to tmp 
    int i = N-2;        //  Index variable i set to second last index of array 

    while(i >= 0 && a[i] > tmp)
    {
        a[i + 1] = a[i]; 
        i = i - 1; 
    }

    a[i+1] = tmp; 
}