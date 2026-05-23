#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N=5;
    int arr[5]={50,60,70,80,10};
    //Index variable for looping
    int i;
    //Define Temp Vaqriable
    int tmp;


//Display array as it is

    puts("Showing array before insserting_at_pos():");
    i = 0;
    while (i < N)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
        i=i+1;
    }

// Inserting at sorting position-LOGIC
// A Condition is deliberately missing.
    tmp =arr[N-1];
    i=N-2;
    while(i>=0){
        arr[i+1]=arr[i];
        i=i-1;
    }
    arr[i+1]=tmp;

//Display array 

    puts("Showing array before insserting_at_pos():");
    i = 0;
    while (i < N)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
        i = i +1 ;
    }    
}

