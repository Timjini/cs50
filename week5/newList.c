#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;
} node;

int main(void)
{
    //Memory for numbers
    node *list = NULL;

    int numbers[4] = {1,2,3,4};

    for (int i =0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = numbers[i];
        n->next = NULL;

        if (list == NULL)
        {
            list = n;
        }

        else if (n->number < list->number)
        {
            n->next = list;
            list =n;
        }

        else 
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }

                // middle of the list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next =n;
                    break;
                }
            }
        }
    }

    for (node *ptr = list; ptr !=NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
}