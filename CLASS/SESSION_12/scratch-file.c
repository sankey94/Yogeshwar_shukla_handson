//  Standard C header files 
#include <stdio.h>      //  For declaration of printf(), puts() 
#include <stdlib.h>     //  For declaration of malloc(), free(), rand(), exit(), EXIT_SUCCESS, EXIT_FAILURE
#include <string.h>     //  For declaration of memset() 
#include <assert.h>     //  For definition of assert() macro 
#include <stdbool.h>    //  For definition of bool data type 


//  Symbolic constants 
#define TRUE                    (1) 
#define FALSE                   (0) 
#define SUCCESS                 (1) 
#define LIST_DATA_NOT_FOUND     (-1) 
#define LIST_EMPTY              (-2)


typedef int data_t; 
typedef int status_t; 
typedef int len_t; 
typedef struct node node_t; 
typedef node_t list_t; 


struct node 
{
    data_t data; 
    node_t* next; 
}; 


// version 1 
status_t insert_start(list_t* p_list, data_t new_data)
{
    /* case 1 : linked list is empty  */
    if(p_list->next == NULL)
    {
        p_list->next = get_node(new_data); 
        return (SUCCESS); 
    }
    else 
    {
        /* case 2 : linked list is not empty */
        node_t* new_node = get_node(new_data); 

        new_node->next = p_list->next; 
        p_list->next = new_node; 
        return (SUCCESS); 
    }
}

// version 2 
status_t insert_start(list_t* p_list, data_t new_data)
{
    node_t* new_node = get_node(new_data); 

    /* case 1 : linked list is empty  */
    if(p_list->next == NULL)
    {
        p_list->next = new_node; 
    }
    else 
    {
        /* case 2 : linked list is not empty */

        new_node->next = p_list->next; 
        p_list->next = new_node; 
    }

    return (SUCCESS); 
}

// version 3
status_t insert_start(list_t* p_list, data_t new_data)
{
    node_t* new_node = get_node(new_data); 

    new_node->next = p_list->next;
    p_list->next = new_node; 
    
    return (SUCCESS); 
}
