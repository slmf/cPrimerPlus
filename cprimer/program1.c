#include <stdio.h>
#include <string.h>

int StringLen(char *str);

int main()
{
    char str[20];
    int len;
    printf("enter the string:");
    scanf("%s", str);
    //len = strlen(str);//一样可以输出正确的字符数量
    len = StringLen(str);
    printf("length of string: %d\n", len);

    return 0;
}
int StringLen(char str[])
{
    int len = 0;
    while (*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}