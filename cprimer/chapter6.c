#include <stdio.h>
#include <string.h>
//#define SIZE 26

int main()
{
    /* char label[SIZE]; //练习6.1
    int i;
    for (i = 0; i < SIZE; i++)
    {
        label[i] = 'a' + i;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%c", label[i]);
    }
    printf("\n"); */

    /* int i, j;//6.2
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    } */

    /* char let = 'F';//6.3
    char start;
    char end;

    for (end = let; end >= 'A'; end--)
    {
        for (start = let; start >= end; start--)
            printf("%c", start);
        printf("\n");
    } */

    /* char ch = 'A'; //6.4
    int i, j;
    for (i = 1; i < 7; i++)
    {
        for (j = 0; j < i; j++)
            printf("%c", ch++);
        printf("\n");
    } */

    /* int i, j, k; //6.5
    char input;
    printf("enter the letter:");
    scanf("%c", &input);

    for (i = 0; i < (int)(input - 'A' + 1); i++)
    {
        for (j = 1; j <= (int)(input - 'A' + 1 - i); j++)
            printf(" ");
        for (k = 0; k <= 2 * i; k++)
        {
            if (k <= i)
                putchar('A' + k);
            else
                putchar('A' + 2 * i - k);
        }
        printf("\n");
    } */

    /* int upper, lower;//6.6
    printf("enter the upper:");
    scanf("%d", &upper);
    printf("enter the lower:");
    scanf("%d", &lower);

    int i;
    for (i = lower; i <= upper; i++)
    {
        printf("%5d %5d %5d", i, i * i, i * i * i);
        printf("\n");
    } */

    /* int i, n;
    char word[40];
    scanf("%s", word);
    n = strlen(word);
    for (i = 0; i < n; i++)
    {
        printf("%c", word[n - i - 1]);
    } */

    /* int vals[8];//6.11
    int i;
    printf("enter 8 integers:\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &vals[i]);
    }
    printf("the reverse order:\n");
    for (i = 7; i >= 0; i--)
        printf("%d ", vals[i]);
    printf("\n"); */

    /* const int SIZE = 8;//6.13
    int twopows[SIZE];
    int i;
    int value = 1;
    for (i = 0; i < SIZE; i++)
    {
        twopows[i] = value;
        value *= 2;
    }
    i = 0;
    do
    {
        printf("%d ", twopows[i]);
        i++;
    } while (i < SIZE);
    printf("\n"); */

    /* const int SIZE = 8;//6.14
    double first[SIZE], second[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("enter the number:");
        scanf("%lf", &first[i]);
    }
    second[0] = first[0];
    for (i = 1; i < SIZE; i++)
    {
        second[i] = second[i - 1] + first[i];
    }
    for (i = 0; i < SIZE; i++)
        printf("%8g ", first[i]);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        printf("%8g ", second[i]); */

    /* char data[255];//6.15
    int i = -1;
    do
    {
        i++;
        scanf("%c", &data[i]);
    } while (data[i] != '\n');
    for (; i >= 0; i--)
    {
        printf("%c", data[i]);
    } */

    /* int year = 0;//6.16
    float one = 100.00, two = 100.00;
    while (one >= two)
    {
        year++;
        one = one + 100.00 * 0.1;
        two = two + two * 0.05;
    }
    printf("after %d years, one is %.2f, two is %.2f\n", year, one, two); */

    /* float money = 100.00;//6.17
    int year = 0;
    while (money > 0.00)
    {
        year++;
        money = money + 0.08 * money;
        money = money - 10.00;
    }
    printf("%d years money is out", year); */

    int friends = 5; //6.18
    int week = 0;
    const int dunbar = 150;
    while (friends <= dunbar)
    {
        week++;
        friends = friends - week;
        friends = friends * 2;
    }
    printf("%d weeks, %d friends", week, friends);

    return 0;
}