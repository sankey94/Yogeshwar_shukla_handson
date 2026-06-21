#include <stdio.h> 
#include <stdlib.h> 

struct node 
{
    int data; 
    struct node* next; 
}; 


struct node* create_list(void);

struct node* get_node(int new_data);
void* xmalloc(size_t size_in_bytes);  

void test_list(void); 

int main(void)
{
    test_list();
    return (0); 
}

void test_list(void) 
{
    struct node* my_new_list = create_list(); 
    struct node* odd_number_list = create_list(); 
    struct node* prime_number_list = create_list(); 
}

struct node* create_list(void)
{
    struct node* head_node; 

    head_node = get_node(0); 

    return (head_node); 
}

struct node* get_node(int new_data) 
{
    struct node* new_node = NULL; 

    new_node = (struct node*)xmalloc(sizeof(struct node)); 
    new_node->data = new_data; 
    new_node->next = NULL; 

    return (new_node); 
}

void* xmalloc(size_t size_in_bytes)
{
    void* ptr = NULL; 

    ptr = malloc(size_in_bytes); 
    if(NULL == ptr && size_in_bytes != 0)
    {
        fprintf(stderr, "fatal:malloc():out of memory\n"); 
        exit(EXIT_FAILURE); 
    }

    return (ptr); 
}