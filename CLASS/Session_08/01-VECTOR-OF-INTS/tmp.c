vector_int_t* create_vector(void); 
status_t release_vector(vector_int_t** pp_vector); 

status_t push_back(vector_int_t* p_vector, data_t new_data); 
status_t pop_back(vector_int_t* p_vector, data_t* p_poped_data); 

status_t push_front(vector_int_t* p_vector, data_t new_data);
status_t pop_front(vector_int_t* p_vector, data_t* p_poped_data); 

void show(vector_int_t* p_vector, const char* msg); 


void test()
{
    vector_int_t* p_vector = create_vector(); 

    push_back(p_vector, 10); 
    push_back(p_vector, 20); 
    push_back(p_vector, 30); 
    push_back(p_vector, 40); 
    push_back(p_vector, 50); 

    status_t status; 
    data_t data; 

    status = pop_vector(p_vector, &data); 
    if(status == SUCCESS)
        printf("Poped data from back : %d\n", data); 
    
}

data_t pop_back(vector_int_t* p_vector); 

void test() 
{
    int n; 
    int* p = &n; 

    int** pp = &p; 

    **pp 

    int*** ppp = &pp; 

    ***ppp; 
}

