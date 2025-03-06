#include <stdio.h>

int main(void)
{
    int n = 50;
    // get the hexadecimal address of the integer n
    int *p = &n;

    printf("%p\n",p);
}