#include <stdio.h>
#include "program5.h"

EList *e_list_append(EList *list, void *data)
{
    Node *pnew;
    Node *scan = *list;

    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL)
        return 0;

    pnew->data = (void *)data;
    pnew->next = NULL;
    if (scan == NULL)
        *list = pnew;
    else
    {
        while (scan->next != NULL)
            scan = scan->next;
        scan->next = pnew;
    }
    return scan;
}
EList *e_list_remove(EList *list, void *data)
{
}
int e_list_length(EList *list)
{
    unsigned int count = 0;
    Node *pnode = *list;

    while (pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    }
    return count;
}
void *e_list_nth_data(EList *list, int n)
{
}
void showList(EList *list, void *data)
{
    Node *pnode = *list;
    while (pnode != NULL)
    {
        printf("element: %d \n", data);
        pnode = pnode->next;
    }
}