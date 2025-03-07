#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // a -> append 
    // w -> write
    FILE *file = fopen("file.csv","a");

    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char *content = malloc(50);

    printf("n: ");
    scanf("%49s", content);
    printf("%s", content);

    fprintf(file,"%s\n",content);
    fclose(file);

    free(content);

    return 0;
} 
