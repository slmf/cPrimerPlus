#include <stdio.h>
#include <inttypes.h>
//void *twoSum(int *nums, int numsSize, int target, int *returnSize);
/* static char *getStr(void)
{
    char p[] = "hello world";
    return p;
} */
void foo(int m, int n)
{

    printf("m=%d, n=%d\n", m, n);
}
void fun(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int main(void)
{
    int x = 1, y = 3;
    fun(x, y); //只传数值，fun中的交换不会影响main中的x。传数值，形参的变化不会影响实参
    //如果是fun(&x,&y),并且函数里的形参也定义成指针，就会交换x和y的值，因为传递了地址，会影响实参
    printf("%d %d", x, y);

    /* int b = 3;
    foo(b += 3, ++b);//会计算b+=3,也会计算++b，最终b就是7
    printf("b=%d\n", b); */

    /* unsigned int a = 6;
    int b = -20; //涉及两种类型的运算，两个值会被分别转换成两种类型的更高级别，见p125
    //所以a+b时，b被转换成20
    (a + b > 6) ? puts(">6") : puts("<=6"); */

    /* int a = 2;
    a *= 4 + 3; //相当于a*=(4+3);
    printf("%d", a); */

    //int a[4][] = {2, 3, 4};//不合法，二维数组定义时，第二个一定要写清楚大小
    //int a[][4] = {2, 3, 4}; //合法，第一个没写清楚没事
    //printf("%d", a[0][1]);

    //float x = 3.45566667, y;
    //y = (int)(x * 100 + 0.5) / 100.0; //保留两位小数点，对第三位四舍五入
    //printf("%f", y);

    //&&和||的短路现象:&&判断前面一个如果不符合就直接跳出，||判断前面一个符合就直接跳出，不会再计算后面的东西
    //scanf不接收空格，gets会接收空格。

    /* int a, b, c, d;
    a = 0;
    b = a++;      //0
    c = ++a;      //2
    d = 10 * a++; //20
    printf("b,c,d:%d, %d, %d", b, c, d); */

    /* char *str = "demo";
    str = getStr();
    printf("%s", str); */

    /* int x = 9832;//反转数字
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        if (rev > INT32_MAX / 10 || (rev == INT32_MAX / 10 && pop > 7))
            return 0;
        if (rev < INT32_MIN / 10 || (rev == INT32_MIN / 10 && pop < -8))
            return 0;
        rev = rev * 10 + pop;
    }
    printf("%d", rev); */

    /*     int nums[4] = {2, 7, 11, 15};
    int returnSize[2] = {0, 0};

    twoSum(nums, 4, 9, returnSize); */

    /* int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    //利用scanf的返回值,如果两个都输入整数，则各返回1,加起来就是2
    {
        printf("%d\n", a + b);
    } */

    return 0;
}
/* void *twoSum(int *nums, int numsSize, int target, int *returnSize)
{//给定一个整数数组和一个目标值，找出数组中和为目标值的两个数
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        for (j = 0; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                returnSize[0] = i;
                returnSize[1] = j;
            }
        }
    }
    printf("%d %d", returnSize[0], returnSize[1]);
    //return *returnSize;
} */