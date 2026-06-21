typedef int data_t; 
typedef int status_t; 

typedef struct node node_t; 
typedef struct list list_t; 

struct node 
{
    data_t data; 
    struct node* next; 
}; 

struct list 
{
    node_t* head_node; 
    size_t size; 
}; 


list_t* create_list(void)
{

}