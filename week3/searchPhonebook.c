#include <stdio.h>
#include <string.h>

typedef struct 
{
    /* data */
    char name[50];
    char phone[20];

}person;


int main(void)
{
    person people[2] = {
        {"james", "98843434"},
        {"tim", "43445466"}
    };

    char name[50];

    printf("Enter name to search: ");
    scanf("%49s", name);
    
    int numPeople = sizeof(people) / sizeof(people[0]);

    for (int i = 0; i < numPeople ; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Phone: %s\n", people[i].phone);
            return 0;
        }
    }

    printf("No match found.\n");
    return 1;
}