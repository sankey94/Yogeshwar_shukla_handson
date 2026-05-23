#include <stdio.h> 
#include <stdlib.h> 

void prn_r(int* a, int i, int N); 

int main(void)
{
    int A[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 

    puts("Print Array: Recursive Version:"); 
    prn_r(A, 0, 8); 

    return (0); 
}

void prn_r(int* a, int i, int N)
{
    if(i >= N)
        return; 

    printf("a[%d]:%d\n", i, a[i]); 
    prn_r(a, i+1, N); 
}