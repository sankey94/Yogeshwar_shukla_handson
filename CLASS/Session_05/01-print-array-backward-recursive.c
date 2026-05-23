#include <stdio.h> 
#include <stdlib.h> 

void print_array_recursive(int* A, int index, int N); 
void print_array_backward_recursive(int* A, int index, int N); 
void print_array_backward_recursive_2(int* A, int index); 

int main()
{
    int N = 8; 
    int A[] = {100, 200, 300, 400, 500, 600, 700, 800}; 

    puts("Printing array recurisvely in forward direction"); 
    print_array_recursive(A, 0, N); 

    puts("Printing array recursively in reverse direction"); 
    print_array_backward_recursive(A, 0, N); 

    puts("Printing array recursively in reverse direction : method 2"); 
    print_array_backward_recursive_2(A, N-1); 

    return (0); 
}

void print_array_recursive(int* A, int index, int N)
{
    if(index == N)
        return; 

    printf("A[%d]:%d\n", index, A[index]); 
    print_array_recursive(A, index + 1, N); 
}

void print_array_backward_recursive(int* A, int index, int N)
{
    if(index == N)
        return; 

    print_array_backward_recursive(A, index + 1, N); 
    printf("A[%d]:%d\n", index, A[index]); 
}

void print_array_backward_recursive_2(int* A, int index)
{
    if(index < 0)
        return; 
    printf("A[%d]:%d\n", index, A[index]); 
    print_array_backward_recursive_2(A, index-1); 
}

/* 
    pabr(a, 0, N)
         index == 0, index < N 
            pabr(A, 1, N)
                index == 1, index < N 
                pabr(A, 2, N)
                    index == 2, index < N 
                    pabr(A, 3, N)
                        index == 3, index < N 
                        pabr(A, 4, N)
                            index == 4, index < N 
                            pabr(A, 5, N)
                                index == 5, index < N 
                                pabr(A, 6, N)
                                    index == 6, index < N 
                                    pabr(A, 7, N)
                                        index == 7, index < N 
                                        pabr(A, 8, N)
                                            index == 8, index < N == FALSE
                                    printf(A[7])
                                printf(A[6])
                            printf(A[5])
                        printf(A[4])
                    printf(A[3])
                printf(A[2])
            printf(A[1])
    printf(A[0])
       
*/