#include <stdio.h>
#include <string.h>

void draw(int);

int main(void)
{
    int height;
    printf("Enter name to search: ");
    scanf("%i", &height);
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < i + 1 ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}