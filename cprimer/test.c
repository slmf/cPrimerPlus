#include <stdio.h>

static char *getStr(void)
{
    char p[] = "hello world";
    return p;
}
int main(void)
{
    /* unsigned int a = 6;
    int b = -20;//涉及两种类型的运算，两个值会被分别转换成两种类型的更高级别
    (a + b > 6) ? puts(">6") : puts("<=6"); */

    /* int a, b, c, d;
    a = 0;
    b = a++;      //0
    c = ++a;      //2
    d = 10 * a++; //20
    printf("b,c,d:%d, %d, %d", b, c, d); */

    char *str = "demo";
    str = getStr();
    printf("%s", str);

    return 0;
}
