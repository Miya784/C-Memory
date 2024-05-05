#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = (int *)malloc(sizeof(int));
    float *ptr2 = (float *)malloc(sizeof(float));
    int *ptr = (int *)malloc(sizeof(int));

    int d =160;
    *ptr = d;
    if (ptr == NULL || ptr1 == NULL || ptr2 == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Value  ptr: %x\n", *ptr);
    printf("Address  ptr1: %p\n", (void *)ptr1);
    printf("Address  ptr2: %p\n", (void *)ptr2);

    free(ptr1);
    free(ptr2);
    free(ptr);
    ptr1 = NULL;
    ptr2 = NULL;
    ptr = NULL;

    if (ptr1 == NULL || ptr2 == NULL || ptr == NULL)
    {
        printf("Memory has been freed\n");
    }
    else
    {
        printf("Memory has not been freed\n");
    }
    return 0;
}
