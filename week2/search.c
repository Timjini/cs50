#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[] = {10, 20, 30};
    int *ptr = arr; // Points to the first element of the array

    printf("First element: %d\n", *ptr);     // 10
    printf("Second element: %d\n", *(ptr+1));
}