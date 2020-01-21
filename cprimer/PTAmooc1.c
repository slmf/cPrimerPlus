#include <stdio.h>
#include <stdlib.h>
//题目：https://pintia.cn/problem-sets/17/problems/260
int main(int argc, char const *argv[])
{
    int count = 1, N = 1;
    int i, j, k;
    char ch;
    if (scanf("%d %c", &N, &ch) == 2)
    {
        if (N <= 1000 && N > 0)
        {
            for (i = 1; count <= N; i++) //到了22行，就会超出1000了,所以i<22
            {
                count += (i + i + 1) * 2;
                if (N < count)
                {
                    count -= (i + i + 1) * 2;
                    break;
                }
            }
            i = i * 2 - 1; //真实的总行数
            for (j = i; j >= (i / 2); j -= 2)
            {
                int n;
                for (n = 0; n < (i - j) / 2; n++)
                    printf(" ");
                for (k = 0; k < j; k++)
                    printf("%c", ch);
                printf("\n");
            }
            for (j = 1; j <= i; j += 2)
            {
                int n;
                for (n = 0; n < (i - j) / 2; n++)
                    printf(" ");
                for (k = 0; k < j; k++)
                    printf("%c", ch);
                printf("\n");
            }
            printf("%d\n", N - count);
        }
    }
    return 0;
}
