#include <stdio.h>
#include <string.h>

void draw(int);
int main(void)
{
    int height = 3;
    // printf("Enter name to search: ");
    // scanf("%i", &height);
    draw(height);
}

void draw(int n)
{
    if (n <=0)
    {
        return;
    }

    draw( n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}