#include <stdio.h>

void scan(int n);

int main(void)
{
    int n;
    scan(n);
}

void scan(int n)
{
    printf("n: ");
    scanf("%i", &n);
    printf("n : %i\n",n);
}