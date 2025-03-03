#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[20];
} person;

int main()
{
    person people[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name for person %d: ", i + 1);
        scanf("%49s", people[i].name);

        printf("Enter phone number for person %d: ", i + 1);
        scanf("%19s", people[i].phone);
    }

    printf("\nStored People:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Person %d: Name: %s, Phone: %s\n", i + 1, people[i].name, people[i].phone);
    }

    return 0;
}
