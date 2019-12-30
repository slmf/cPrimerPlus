#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue line;
    Item temp;
    char ch;

    InitializeQueue(&line);
    puts("testing the queue interface. type a to add a value");
    puts("type d to delete a value,type q to quit");
    while ((ch = getchar()) != 'q') //ch这里必须加一层括号，才能获得ch的值
    {
        if (ch != 'a' && ch != 'd')
            continue;
        if (ch == 'a')
        {
            printf("integer to add:");
            scanf("%d", &temp);
            if (!QueueIsFull(&line))
            {
                printf("putting %d into queue\n", temp);
                EnQueue(temp, &line);
            }
            else
                puts("queue is full");
        }
        else
        {
            if (QueueIsEmpty(&line))
                puts("nothing to delete");
            else
            {
                DeQueue(&temp, &line);
                printf("removing %d from queue\n", temp);
            }
        }
        printf("%d items in queue\n", QueueItemCount(&line));
        puts("type a to add,d to delete, q to quit:");
    }
    EmptyTheQueue(&line);
    puts("bye");

    return 0;
}
