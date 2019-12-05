#include <stdio.h>
//#include <stdbool.h>

int main()
{
    /* int guest = 9;
    while (guest++ < 10)
    {
        printf("%d\n", guest);
    } */

    /* const int minperhour = 60;//练习题5.1
    int minutes, hours, mins;
    printf("Enter the number of minutes to convert: ");
    scanf("%d", &minutes);
    while (minutes > 0)
    {
        hours = minutes / minperhour;
        mins = minutes % minperhour;
        printf("%d minutes = %d hours, %d minutes\n", minutes, hours, mins);
        printf("Enter next minutes value:");
        scanf("%d", &minutes);
    }
    printf("bye\n"); */

    /* int num;//练习题5.2
    printf("enter a number:");
    scanf("%d", &num);
    int low = num - 1;
    int large = num + 10;
    while (low++ < large)
    {
        printf("%d ", low);
    } */

    /* int num; //练习题5.3
    printf("enter a number:");
    scanf("%d", &num);
    while (num > 0)
    {
        printf("%d days are %d weeks, %d days.\n", num, num / 7, num % 7);
        scanf("%d", &num);
    } */
    /* bool in = 1;
    printf("%d", in); */

    int count = 2;
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%d", i);
    }

    return 0;
}