#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     int n = 50;
//     // get the hexadecimal address of the integer n
//     int *p = &n;

//     printf("%p\n",p);
// }
// int main(void)
// {
//     char *s = "New";
//     printf("%s\n", s);
//     printf("%s\n", (s+1));
//     printf("%s\n", (s+2));
// }

int main(void)
{
    char *s = "Nlm";
    char *t = "nas";

    for (int i = 0 ; i < 3 ;i++)
    {
        if (s[i] == t[i])
        {
            printf("%i similar char\n",i);
            printf("%c first\n",s[i]);
            printf("%c second\n",t[i]);
        }
        else
        {
            printf("%i not similar\n",i);
            printf("%c -first\n",s[i]);
            printf("%c -second\n",t[i]);
        }
    }

    // if (strcmp(s,t) == 0)
    // {
    //     printf("same\n");
    // }
    // else
    // {
    //     printf("not the same \n");
    // }
}