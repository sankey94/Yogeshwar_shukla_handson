#include "vector.h"

#include <stdio.h> 

void test_vector(void); 

int main(void)
{
    test_vector(); 
    return (0); 
}

void test_vector(void)
{
    vector_int_t* p_vector = NULL; 
    int choice; 
    int data; 

    p_vector = create_vector(); 

    while(TRUE)
    {
        printf("Do you want to enter more data? [YES-1 | NO-0]:"); 
        scanf("%d", &choice); 
        if(choice != 1) 
            break; 
        printf("Enter an integer:"); 
        scanf("%d", &data); 
        push_back(p_vector, data); 
    }

    show(p_vector, "Showing data input from keyboard:"); 
    release_vector(&p_vector); 
}

/* 
    BUILD COMMAND 
    Windows 
    # cl /Fe:app.exe vector.c use_vector.c 
    # app.exe 

    Linux 
    # gcc -o app vector.c use_vector.c 
    # ./app 

    macOS
    # clang -o app vector.c use_vector.c 
    # ./app 
*/