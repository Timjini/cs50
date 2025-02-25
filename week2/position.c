#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("First element: %d\n", *ptr);
    printf("Second element: %d\n", *(ptr+1));
}