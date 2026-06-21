#include <stdio.h>      // For declaration of printf(), puts()
#include <stdlib.h>     // For Declaration of mallic(), free(), rand(), exit(), EXIT_SUCCESS, EXIT_FAILURE
#include <string.h>     // For declaration of memset() 
#include <assert.h>     // For defination of assert() macro
#include <stdbool.h>    // For defination of bool data type

// Symbolic constants
#define TRUE                 (1)
#define FALSE                (0)
#define SUCCESS              (1)
#define LIST_DATA_NOT_FOUND  (-1)
#define LIST_EMPTY           (-2)

// Typedefs
typedef int data_t;
typedef int status_t;  
typedef int len_t;
typedef struct node node_t;
typedef node_t list_t;


// Data layout definations 

struct node
{
        data_t data;
        node_t* next;
};


// Interface function decclarations

// Function Name: create_list()
// @input:      None
// @output:     Address of dynamically allocated instance of struct node (which is a dummy node)
// @behaviour:  create_list() function creates a new instance of a singly linked list by allocating 
//              a dummy node, initialising the data member and the next member to 0 and NULL respectively
//              and returns the address of the allocating mode.
list_t* create_list(void); 


//Insert Routines

// Name: insert_start()
// @input:
//     @p_list:    which linked list?
//     @new_data: which data value?
// @output: status of function. insert_start() returns only SUCCESS
// @behaviour: insert_start() function allocates new node containing  @new_data
//             and attaches it as the starting position of the list pointed  by @p_list

status_t insert_start(list_t* p_list, data_t new_data);


// Name: insert_end()
// @input:
//     @p_list:    which linked list?
//     @new_data: which data value?
// @output: status of function. insert_end() returns only SUCCESS
// @behaviour: insert_end() function allocates new node containing  @new_data
//             and attaches it as the ending position of the list pointed  by @p_list
status_t insert_end(list_t* p_list, data_t new_data);

// Name: insert_after()
// @input:
//      @p_list:           which linked list?
//      @existing_data:    existing data in the linked list after which @new_data must be inserted
//      @new_data:         new data value to be inserted
// @output: Status of the function
//      SUCCESS:                If @existing_data is present in the linked_list @p_list
//      LIST_DATA_NOT_FOUND:    If @existing_data is not present in the linked list @p_list
// @behaviour:
//      The algorithm searched @p_list for the occurence of @existing_data. If search fails
//      it returns an error code LIST_DATA_NOT_FOUND.Otherwise, it allocates new node, populates it
//      with @new_data and inserts the new node after the exissing node in the @p_list containing the
//      first occurence of @existing_data and returns Success 
status_t insert_after(list_t* p_list, data_t existing_data, data_t new_data);

// Name: insert_before()
// @input:
//      @p_list:           which linked list?
//      @existing_data:    existing data in the linked list before which @new_data must be inserted
//      @new_data:         new data value to be inserted
// @output: Status of the function
//      SUCCESS:                If @existing_data is present in the linked_list @p_list
//      LIST_DATA_NOT_FOUND:    If @existing_data is not present in the linked list @p_list
// @behaviour:
//      The algorithm searched @p_list for the occurence of @existing_data. If search fails
//      it returns an error code LIST_DATA_NOT_FOUND.Otherwise, it allocates new node, populates it
//      with @new_data and inserts the new node before the exissing node in the @p_list containing the
//      first occurence of @existing_data and returns Success
status_t insert_before(list_t* p_list, data_t existing_data, data_t new_data);


// Get and pop routines

//  Name: get_start()
//  @input:
//      @p_list:        which linked list?
//      @p_start_data:  [OUT oarameter] address of data_t variable used to return the start data
//  @output: Status of function
//      SUCCCESS:   If the @p_list is not empty
//      LIST_EMPTY: If the @p_list is empty
// @behaviour : Check if the @p_list is empty. If true, return LIST_EMPTY. Otherwwise, return data
//      from the first node with data node via @p_start_data abd return SUCESS. (Note that the first 
//      node with data is not detached fdrom the linked list in the get routines) 
status_t get_start(list_t* p_list, data_t* p_start_data);

//  Name: get_end()
//  @input:
//      @p_list:        which linked list?
//      @p_end_data:  [OUT parameter] address of data_t variable used to return the end data
//  @output: Status of function
//      SUCCCESS:   If the @p_list is not empty
//      LIST_EMPTY: If the @p_list is empty
// @behaviour : Check if the @p_list is empty. If true, return LIST_EMPTY. Otherwise, return data
//      from the last node with data node via @p_start_data and return SUCCESS. (Note that the first 
//      node with data is not detached from the linked list in the get routines) 
status_t get_end(list_t* p_list, data_t* p_end_data);

//  Name:   pop_start() 
//  @input:     
//      @p_list:        which linked list? 
//      @p_start_data:  [OUT parameter] address of data_t variable used to return the start data 
//  @output: Status of the function 
//      SUCCESS:    If the @p_list is not empty 
//      LIST_EMPTY  if the @p_list is empty 
//  @behaviour: Check if the @p_list is empty. If true, return LIST_EMPTY. Otherwise, return data 
//      from the first node with data via @p_start_data, delete the first node with data and 
//      return SUCCESS. 
status_t pop_start(list_t* p_list, data_t* p_start_data);

//  Name:   pop_end() 
//  @input:     
//      @p_list:        which linked list? 
//      @p_end_data:    [OUT parameter] address of data_t variable used to return the end data 
//  @output: Status of the function 
//      SUCCESS:    If the @p_list is not empty 
//      LIST_EMPTY  if the @p_list is empty 
//  @behaviour: Check if the @p_list is empty. If true, return LIST_EMPTY. Otherwise, return data 
//      from the last node with data via @p_end_data, delete the last node with data and 
//      return SUCCESS. 
status_t pop_end(list_t* p_list, data_t* p_end_data);


// Remove routines


// name: remove_start()
// @input:
//      @p_list:    which linked list?
// @output:     status of function
//      SUCCESS:    If the @p_list is not empty
//      LIST_EMPTY: IF the @p_list is empty
// @behaviour:
//      Check if the @p_list is empty. If true, then return error code LIST_EMPTY
//      Otherwise, delete the last node with data abd return SUCCESS
status_t remove_start(list_t* p_list);

//  name:   remove_end() 
//  @input: 
//      @p_list:    which linked list? 
//      @r_data:    Data value to be removed from @p_list 
//  @output:    Status of the function 
//      SUCCESS:                If the @r_data is present in the list 
//      LIST_DATA_NOT_FOUND:    If the @r_data is not present in the list 
//  @behaviour: 
//      Search for the occurrence of @r_data in the @p_list. If not found then 
//      return the error code LIST_DATA_NOT_FOUND. Else delete the first node 
//      containing @r_data. In case of multiple-occurrences only the first occurrence will be 
//      removed. 
status_t remove_end(list_t* p_list);

//  name:   remove_end() 
//  @input: 
//      @p_list:    which linked list? 
//      @r_data:    Data value to be removed from @p_list 
//  @output:    Status of the function 
//      SUCCESS:                If the @r_data is present in the list 
//      LIST_DATA_NOT_FOUND:    If the @r_data is not present in the list 
//  @behaviour: 
//      Search for the occurrence of @r_data in the @p_list. If not found then 
//      return the error code LIST_DATA_NOT_FOUND. Else delete the first node 
//      containing @r_data. In case of multiple-occurrences only the first occurrence will be 
//      removed. 
status_t remove_data(list_t* p_list, data_t* p_removed_data);

// Miscellaneous routines

//  name:    find()
//  @input:
//      @p_list:    which linked list?
//      @find_data: data value whose membership must be checked in the @p_list
//  @output:    bool value
//      TRUE:   if @find_data is present in the @p_list
//      FALSE:  otherwise
//  behaviours: Searches @find_data in the @p_list. If found returns TRUE, FALSE otherwise.
bool find(list_t* p_list, data_t find_data);

//  name:   is_list_empty() 
//  @input: 
//      @p_list:    which linked list? 
//  @output: bool
//  @behaviour: Checks if there is any other node than the dummy node. 
//              If yes, then return FALSE, if no then returns TRUE  
bool is_list_empty(list_t* p_list);

//  name:   get_list_length()
//  @input:
//      @p_list:    which linked list
//  @output: len_t value
// @behaviour: Counts the total number of nodes excluding the dummy node and return count
len_t get_list_length(list_t* p_list);

//  name:   show_list() 
//  @input: 
//      @p_list:    which linked list? 
//      @msg:       message to be displayed before displaying the list contents 
//  @output:    None 
//  @beahviour:     If @msg is not NULL then display it and then go through all non-dummy nodes
//                  of the @p_list and print their data members 
void show_list(list_t* p_list, const char* msg);

// Destroy routine

//  name:   destroy_list() 
//  @input: 
//      @pp_list:   Address of the head-node of the linked list to be destroyed
//  @output:        Status of the function, always SUCCESS 
//  @behaviour:     Get the address of head_node of the linked list to be destroyed by 
//                  de-referencing pp_list. Free all nodes including the dummy node. 
//                  Write NULL in the pointer variable whose address is present in @pp_list 
//                  Return SUCCESS 
status_t destroy_list(list_t** pp_list);

// Auxillay /Helper function declaration

//  name: search_node()
//  @input:
//    @p_list:         Which linked list?
//    @search_data:    Data Value to be searched for membership
//  @output:    node_t*
//  @behaviour:        Search for @search_data in the list @p_list.
//                     If not found return NULL
//                     If found, return the address of the first node
//                     contatining @search_data
//  This helper function is used by find(), insert_after(), insert_before() etc
node_t* search_node(list_t* p_list, data_t search_data);

//  name:   get_node() 
//  @input:     
//      @data_t :   data to be encapsulated in newly allocated node 
//  @output:        node_t* 
//  @behaviour:     Allocate a new dynamic instance of node_t and store new_data 
//                  in its data member and return the address to the newly allocated node. 
node_t* get_node(data_t new_data);

//  name:   xmalloc() 
//  @input: 
//      @size_in_bytes:     size_t variable storing the size in bytes of the memory block 
//                          to be allocated dynamically 
//  @output:                void* -> Base address of data block 
//  @behaviour:             Allocate dynamic memory block of @size_in_bytes bytes 
//                          on heap using library malloc(). Do the sanity check for the 
//                          return value of malloc(). If the sanity check fails emit the 
//                          error on standard error device and exit from the application 
//                          If the sanity check succeeds, return the address return by 
//                          malloc() 
void * xmalloc(size_t size_in_bytes);



int main(void)
{
    exit(EXIT_SUCCESS);

}