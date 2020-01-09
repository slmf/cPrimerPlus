#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 2000001

int main(int argc, char const *argv[])
{
    /* int n;
    while (scanf("%d", &n) && n)
        printf("%d\n", fun(n)); */

    int i; //筛选质数
    int j;
    char flag[N];
    memset(flag, '0', N);
    flag[0] = '1';
    flag[1] = '1';

    for (i = 2; i <= sqrt(N); i++)
    {
        if (flag[i] == '0')
        {
            for (j = i * i; j < N; j += i)
            {
                flag[j] = '1';
            }
        }
    }

    int number;

    while (1)
    {
        scanf("%d", &number);

        if (number == 0)
            break;

        for (i = 2; i <= number; i++)
        {
            if (flag[i] == '0')
                printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
/* int fun(int n)
{ //题目：https://www.dotcpp.com/oj/problem1004.html
    if (n == 1 || n == 2 || n == 3 || n == 4)
        return n;
    else
        return fun(n - 1) + fun(n - 3);
} */