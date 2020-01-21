#include <stdio.h>

int main()
{
    int arr[4];
    int i, j, temp;

    printf("enter 4 int:");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        //for (j = 4; j >= i; j--) //如果总共只有4个整数，那么这里j应该为2
        for (j = 0; j < 4 - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
