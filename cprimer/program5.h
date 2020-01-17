#ifndef PROGRAM5_H_
#define PROGRAM5_H_

struct ELEM
{
    int element;
};

typedef struct ELEM Item;
typedef struct node
{
    Item *data;
    struct node *next;
} Node;
typedef Node *EList;

EList *e_list_append(EList *list, void *data);
EList *e_list_remove(EList *list, void *data);
int e_list_length(EList *list);
void *e_list_nth_data(EList *list, int n);
void showList(EList *list, void *data);

#endif
