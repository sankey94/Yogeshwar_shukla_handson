node_t* pop_start(list_t* p_list, data_t* p_start_data)
{   
    node_t* tmp = NULL; 

    if(p_list != NULL)
    {
        *p_start_data = p_list->data;
        tmp = p_list->next; 
        free(p_list); 
    } 

    return (tmp); 
}

//  Call 

void test() 
{
    node_t* p_list = NULL; 

    p_list = insert_start(p_list, 10);
    p_list = insert_start(p_list, 20); 
    p_list = insert_end(p_list, 30); 

    p_list = pop_start(p_list); 
}