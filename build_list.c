#include <stdio.h>
#include <stdlib.h>

typedef struct build_list
{
    int n;
    struct build_list *next;
} build_list;

build_list *add_node(build_list *head, int n)
{
    build_list *new_node;

    new_node = malloc(sizeof(build_list));

    if (!new_node)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;
    head = new_node;

    return new_node;
}

int main(void)
{

    build_list *list = NULL;

    build_list *node = malloc(sizeof(build_list));

    node->n = 3;
    node->next = NULL;

    list = node;

    list->next = add_node(list, 4);
    list->next->next = add_node(list, 5);
    list->next->next->next = add_node(list, 6);

    for (build_list *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->n);
    }
}
