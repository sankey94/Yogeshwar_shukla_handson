#include <stdio.h> 
#include <stdlib.h> 

unsigned long long factorial(unsigned int n); 

int main(void)
{
    int N; 
    unsigned long long result; 

    N = 5; 
    result = factorial(N); 
    printf("Result = %llu\n", result); 

    return (EXIT_SUCCESS); 
}

unsigned long long factorial(unsigned int n)
{
    if(n == 1 || n == 0)
        return (1); 

    return (n * factorial(n-1)); 
}