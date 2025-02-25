#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numbers[] = {59, 39, 10, 1};

    int num = atoi(argv[1]);
    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] == num)
        {
            printf("number found %d", numbers[i]);
            return 0;
        }
    }
    printf("Nothing found");
    return 1;
}