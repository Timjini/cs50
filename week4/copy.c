#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = "game";
    //allocate memory
    char *t = malloc(strlen(s) + 1);

    if (t == NULL)
    {
        return 1;
    }

    strcpy(t,s);
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     t[i] = s[i];
    // }

    if (strlen(t) > 0)
    {
        //uppercase
        t[0] = toupper(t[0]);
    }

    printf("%s",s);
    printf("=> %s",t);
    free(t);
    printf("%s--->",t);
}