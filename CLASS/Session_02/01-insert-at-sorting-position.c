#include<stdio.h>

void insert_at_sorting_position(int a[], int N);
void display(int a[], int N, const char* msg);

int main(void)
{
    int a[6] = {10, 20,30, 40,50, 15};
    int b[5] = {100, 200, 300, 400 ,5};
    display(a, 6, "Display \'a\' before insert at sorting position():");
    insert_at_sorting_position(a, 6);
    display(a, 6, "Display \'a\' after insert at sorting position():");
    display(b, 5, "Display \'b\' before insert at sorting position():");
    insert_at_sorting_position(b, 5);
    display(b, 5, "Display \'b\' after insert at sorting position():");


}

/*
    Pre-condition (1) : N >=2
    Pre-condition (2) : a[0]....a[N-2] are sorted
                        but a[0]....a[N-1] are not
                        necessarily sorted

    Post-Condition: a[0]....a[N-1] i.e. entire array  
                    is sorted
*/

void insert_at_sorting_position(int a[], int N)
{
    int tmp;
    int i;
    tmp = a[N-1];
    i = N-2;
    while(i >= 0 && a[i] > tmp)
    {
        a[i+1] = a[i];
        i = i - 1;
    }
    a[i+1] = tmp;
}
void display(int a[], int N, const char* msg)
{
    if(msg != NULL)
    {
        puts(msg);
    }
    int i;

    i=0;
    while(i < N)
    {
        printf("a[%d]:%d\n", i, a[i]);
        i = i+1;
    }
}