#include <stdio.h>

int StringLen(char *str);

int main()
{
    char str[20];
    int len;
    printf("enter the string:");
    scanf("%s", str);
    len = StringLen(str);
    printf("length of string: %d\n", len);

    return 0;
}
int StringLen(char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}