#include <stdio.h>
#include <stdlib.h>



struct  node
{
    int data;
    struct node* next;
};

void build_linked_list(void);

int main(void)
{
    build_linked_list();
    return(0);
}

void build_linked_list(void)
{
    struct node N1;
    struct node N2;
    struct node N3;
    struct node N4;
    
    N1.data = 100;
    N1.next  = &N2;

    N2.data = 200;
    N2.next = &N3;

    N3.data = 300;
    N3.next = &N4;

    N4.data = 400;
    N4.next = NULL;

    struct node* run = NULL;

    run = &N1;
    while(run != NULL)
    {
        printf("data:run->data:%d\n", run->data);
        run = run->next;
    }
    
    struct node* pNode = &N1;

    printf("pNode->data : %d\n", pNode->data);
    printf("pNode->next->data : %d\n", pNode->next->data);
    printf("pNode->next->next->data : %d\n", pNode->next->next->data);
    printf("pNode->next->next->next->data : %d\n",pNode->next->next->next->data);

    printf("pNode : %p &N1 : %p\n", pNode, &N1);
    printf("pNode->next : %p &N2 : %p\n", pNode->next, &N2);
    printf("pNode->next->next : %p &N3 : %p\n", pNode->next->next, &N3);
    printf("pNode->next->next->next : %p &N4 : %p\n", pNode->next->next->next, &N4);
}