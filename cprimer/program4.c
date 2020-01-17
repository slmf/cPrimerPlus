#include <stdio.h>

int main()
{
    int n, i, max;
    int arr[100];
    printf("enter number:");
    if (scanf("%d", &n) == 1)
    {
        printf("enter ints:");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("the max number: %d\n", max);

    return 0;
}
