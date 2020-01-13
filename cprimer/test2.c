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
    memset(flag, '0', N); //Memset 用来对一段内存空间全部设置为某个字符，一般用在对定义的字符串进行初始化为‘ ’或‘/0’
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
    { //计算小于number有多少个质数
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
{ //有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？
    if (n == 1 || n == 2 || n == 3 || n == 4)
        return n;
    else
        return fun(n - 1) + fun(n - 3);
} */