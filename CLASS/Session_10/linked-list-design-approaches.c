#include <stdio.h> 

struct node 
{
    int data; 
    struct node* next; 
}; 

//  Academic approach 
//  Bekar Coding, Root of Evils 

/*************FORBIDDEN CODE - START**************/
struct node* myList = NULL; 

int main()
{
    do
    {
        puts("******MENU******"); 
        puts("1: Insert 2: Delete 3: Search 4: Show"); 
        int choice;
        int choice2;
        int existing_data;  
        int new_data; 
        scanf("%d", &choice); 
        switch(choice)
        {
            case 1: 
                puts("Please enter where do you want to insert data?"); 
                puts("1: Start 2: End 3: After Data 4: Before Data"); 
                scanf("%d", &choice2); 
                
                printf("Enter new data:");
                scanf("%d", &new_data);
                if(choice == 1 || choice == 2)
                {     
                    insert1(new_data); 
                }
                else if(choice == 3 || choice == 4)
                {
                    printf("Please Enter existing data:"); 
                    scanf("%d", &existing_data); 
                    insert2(existing_data, new_data); 
                }
                
                break; 
        }
    }while(choice == 'y' || choice == 'Y'); 
}
/*************FORBIDDEN CODE - END**************/

//  Alternate approach: 

struct node* create_list(void)
{
    return (NULL); 
} 

void insert_start(struct node* myList, int new_data)
{
    if(myList == NULL) 
    {
        myList = (struct node*)malloc(sizeof(int)); 
        myList->data = new_data; 
        myList->next = NULL; 
        //  PROBLEM 
        //  new_list pointer in test_list() will still be NULL
    }
}

void insert_start(struct node** pp_list, int new_data) 
{
    struct node* p_list = *pp_list; 

    if(NULL == p_list)
    {
        *pp_list = (struct node*)malloc(sizeof(struct node)); 
        (*pp_list)->data = new_data; 
        (*pp_list)->next = NULL; 
        return; 
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node)); 
    new_node->next = p_list->next; 
    p_list->next = new_node; 
    //  UGLY
}

void test_list() 
{
    struct node* new_list = create_list(); 
    insert_start(new_list, new_data); // refer single pointer version 

    insert_start(&new_list, new_data); // refer to double ptr version 
}

//////////////////////////////////////////////////////////////////////

//  GENUINELY GOOD APPROACHES: 
//  USE DUMMY NODE 

//  DUMB -> DUMMY 

//  refer dummy node approach 