#include<stdio.h>
#include "myCustomArray.h"

int main()
{
    struct myCustomArray marks;
    createArray(&marks,10, 2);
    printf("SET:\n");
    setValue(&marks);
    printf("\nDISPLAY:\n");
    show(&marks);
    return 0;
}