#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
#include <assert.h> 

void test(void); 

int main(void)
{
    test(); 
    return (0); 
}

void test(void)
{
    int nr, dr; 

    printf("Enter numerator:"); 
    scanf("%d", &nr); 

    printf("Enter denomenator:"); 
    scanf("%d", &dr); 
    
    bool b = dr != 0; 
    assert(b); 
    
    int quotient = nr / dr; 
    printf("Q = %d\n", quotient); 
}
