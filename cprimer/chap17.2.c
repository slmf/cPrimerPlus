#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void showmovies(Item item);
char *s_gets(char *st, int n);

int main(int argc, char const *argv[])
{
    List movies;
    Item temp;

    InitializeList(&movies);
    if (ListIsFull(&movies))
    {
        fprintf(stderr, "no money available!bye!\n");
        exit(1);
    }

    //获取用户输入并储存
    puts("enter first movie title");
    while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
    {
        puts("enter your rating<0-10>");
        scanf("%d", &temp.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(temp, &movies) == 0)
        {
            fprintf(stderr, "problem allocating memory\n");
            break;
        }
        if (ListIsFull(&movies))
        {
            puts("the list is now full");
            break;
        }
        puts("enter next movie title(empty line to stop):");
    }

    //显示
    if (ListIsEmpty(&movies))
        printf("no data entered.");
    else
    {
        printf("here is the movie list:\n");
        Traverse(&movies, showmovies);
    }
    printf("you entered %d movies.\n", ListItemCount(&movies));

    //清理
    EmptyTheList(&movies);
    printf("bye\n");

    return 0;
}
void showmovies(Item item)
{
    printf("Movie: %s Rating: %d\n", item.title, item.rating);
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}