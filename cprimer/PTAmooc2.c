#include <stdio.h>
#include <math.h>
//题目：https://pintia.cn/problem-sets/17/problems/261
int main(int argc, char const *argv[])
{
    int N, n, i, k, j = 0, count;
    if (scanf("%d", &N) == 1 && N <= 100000 && N >= 1)
    {
        int arr[N];
        for (n = 3; n <= N; n++)
        {
            k = sqrt(n);
            for (i = 2; i <= k; i++) //判断是否素数
            {
                if (n % i == 0)
                    break;
            }
            if (i > k) //如果循环结束也没有break，说明是素数
                arr[j++] = n;
        }
        for (i = 0; i < j; i++)
        {
            if (arr[i + 1] - arr[i] == 2)
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
