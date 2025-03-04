#include <stdio.h>
#include <string.h>

int linearSearch(int array[], int size, int num);

int main(void)
{
    int num;
    printf("Enter number to search: ");
    scanf("%i", &num);

    int array[] = {20, 19, 10, 30, 40, 44, 17, 50, 55, 23, 11, 44, 53, 66, 35, 53, 33, 26, 50};
    int size = sizeof(array) / sizeof(array[0]);

    if (linearSearch(array, size, num) == -1)
    {
        printf("number not found\n");
        return 1;
    }

    return 0;
}

int linearSearch(int array[], int size, int num)
{
    if (num <= 0) 
    {
        printf("negative number \n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            printf("number found at index %d\n", i);
            return 0;
        }
    }
    return -1;
}
