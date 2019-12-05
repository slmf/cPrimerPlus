#include <stdio.h>
//指针和数组
//double min(double, double);
int data[2] = {100, 200};
int moredata[2] = {300, 400};
int main()
{
    /* double x, y;
    printf("enter two numbers(q to quit)");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("the smaller number is %f.\n", min(x, y));
        printf("next two values:");
    }
    printf("bye\n"); */
    int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("  *p1=%d,  *p2=%d,   *p3=%d\n", *p1, *p2, *p3);
    printf("*p1++=%d,  *++p2=%d,   (*p3)++=%d\n", *p1++, *++p2, (*p3)++);
    printf("  *p1=%d,  *p2=%d,   *p3=%d\n", *p1, *p2, *p3);

    return 0;
}
/* double min(double a, double b)
{
    return a < b ? a : b;
} */