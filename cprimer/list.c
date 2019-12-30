#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

static void CopyToNode(Item item, Node *pnode);

void InitializeList(List *plist)
{
    *plist = NULL; //把链表设置为空
}

bool ListIsEmpty(const List *plist)
{
    if (*plist == NULL)
        return true;
    else
        return false;
}

bool ListIsFull(const List *plist)
{
    Node *pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL) //尝试为新项分配空间，如果分配失败，说明链表已満
        full = true;
    else
        full = false;
    free(pt);
    return full;
}

unsigned int ListItemCount(const List *plist)
{
    unsigned int count = 0;
    Node *pnode = *plist;

    while (pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    }
    return count;
}

bool AddItem(Item item, List *plist)
{
    Node *pnew;
    Node *scan = *plist;

    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL)
        return false;

    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (scan == NULL)
        *plist = pnew; //如果是空链表，就把pnew放在链表的开头
    else
    {
        while (scan->next != NULL)
            scan = scan->next;
        scan->next = pnew;
    }
    return true;
}

//把pfun指向的函数作用于链表中的每一项
void Traverse(const List *plist, void (*pfun)(Item item))
{ //可把函数头的List改成Node,同时下面这行要改成：const Node *pnode = plist
    Node *pnode = *plist;
    while (pnode != NULL)
    {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    }
}

void EmptyTheList(List *plist)
{
    Node *psave;
    while (*plist != NULL)
    {
        psave = (*plist)->next;
        free(*plist);
        *plist = psave;
    }
}
static void CopyToNode(Item item, Node *pnode)
{
    pnode->item = item;
}