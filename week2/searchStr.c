#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <word>\n", argv[0]);
        return 1;
    }
    char *strings[] = {"cars", "bikes", "people"};
    char *word = argv[1];

    for (int i = 0; i < 3; i++)
    {
        if (strcasecmp(word, strings[i]) == 0)
        {
            printf("found");
            return 0;
        }
    }

    printf("couldn't find %s", word);
    return 1;
}
