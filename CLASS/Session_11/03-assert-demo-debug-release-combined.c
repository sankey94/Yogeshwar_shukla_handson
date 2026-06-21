#include <stdio.h> 
#include <stdlib.h> 
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
    #ifdef DEBUG 
        assert(dr != 0); 
    #else 
        if(dr != 0)
        {
            puts("Cannot divide by zero"); 
            return; 
        }
    #endif 

    int quotient = nr / dr; 
    printf("Q = %d\n", quotient); 
}

/*

struct node 
{
    int data; 
    struct node* prev; 
    struct node* next; 
}; 

void generic_insert(struct node* beg, struct node* mid, struct node* end)
{
    //  Precondition
    assert(beg->next == end && end->prev == beg);    

    mid->next = end; 
    mid->prev = beg; 
    beg->next = mid; 
    end->prev = mid; 

    //  Post-condition 
    assert(beg->next == mid && mid->prev == beg && mid->next == end && end->prev == mid); 
}

*/