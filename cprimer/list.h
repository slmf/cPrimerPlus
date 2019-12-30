//用于chap17.2.c
#include <stdbool.h>
#ifndef LIST_H_
#define LIST_H_
#define TSIZE 45
struct film
{
    char title[TSIZE];
    int rating;
};

typedef struct film Item;
typedef struct node
{
    Item item;
    struct node *next;
} Node;
typedef Node *List; //指向Node的指针

//前提条件：plist指向一个链表
//后置条件：链表初始化为空
void InitializeList(List *plist);

bool ListIsEmpty(const List *plist);

bool ListIsFull(const List *plist);

unsigned int ListItemCount(const List *plist);

bool AddItem(Item item, List *plist);

//把pfun指向的函数作用于链表中的每一项
void Traverse(const List *plist, void (*pfun)(Item item));

void EmptyTheList(List *plist);

#endif