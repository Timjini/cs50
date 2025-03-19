#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

bool search(node *tree, int number);

node *create_node(int number)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->number = number;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

node *insert(node *tree, int number)
{
    if (tree == NULL)
    {
        return create_node(number);
    }

    if (number < tree->number)
    {
        tree->left = insert(tree->left, number);
    }
    else if (number > tree->number)
    {
        tree->right = insert(tree->right, number);
    }

    return tree;
}

// recursive binary tree search
bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}

void free_tree(node *tree)
{
    if (tree != NULL)
    {
        free_tree(tree->left);
        free_tree(tree->right);
        free(tree);
    }
}

int main(void)
{
    node *root = NULL;

    printf("Search 7: %s\n", search(root, 7) ? "Found" : "Not found");
    printf("Search 20: %s\n", search(root, 20) ? "Found" : "Not found");

    // free memory
    free_tree(root);

    return 0;
}
