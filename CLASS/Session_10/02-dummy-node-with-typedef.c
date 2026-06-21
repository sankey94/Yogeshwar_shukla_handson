#include <stdio.h> 
#include <stdlib.h> 

typedef int data_t; 
typedef int status_t; 
typedef struct node node_t; 
typedef node_t list_t; 

struct node 
{
    data_t data; 
    struct node* next; 
}; 

list_t* create_list(void); 

status_t insert_start(list_t* p_list, data_t new_data); 


status_t search_data(list_t* p_list, data_t search_data); 