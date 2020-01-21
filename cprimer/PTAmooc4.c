#include <stdio.h>
//https://pintia.cn/problem-sets/17/problems/264
int main(int argc, char const *argv[])
{
    unsigned long int number, newNum, temp;
    int count = 0, newCount = 0, n = 0, i, j, k, num = 0;
    int arr[20], arr2[20];
    if (scanf("%ld", &number) == 1 && number <= 999999999999)
    {
        temp = number;
        while (number > 9)
        {
            count++;
            arr[n++] = number % 10;
            number = number / 10;
        }
        count++;
        arr[count - 1] = number;

        for (i = 2; i < 10; i++)
        {
            newNum = (long)(temp * i);
            newCount = 0;
            n = 0;
            while (newNum > 9)
            {
                newCount++;
                arr2[n++] = newNum % 10;
                newNum = newNum / 10;
            }
            newCount++;
            arr2[newCount - 1] = newNum;

            if (newCount == count)
            {
                for (j = 0; j < count; j++)
                {
                    for (k = 0; k < newCount; k++)
                    {
                        if (arr[j] == arr2[k] && arr2[k] >= 0)
                        {
                            arr2[k] = -1;
                            num++;
                        }
                    }
                }
                if (num == count)
                {
                    puts("yes");
                    printf("%ld\n", temp * i);
                }
                else
                    puts("no");
                num = 0;
            }
        }
    }

    return 0;
}
