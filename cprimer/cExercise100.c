//出自：https://wenku.baidu.com/view/48e09ef2bd64783e08122b18.html?sxts=1578391242618
//https://blog.csdn.net/qq_41880190/article/details/84064556
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>

void code1()
{ //题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
    int x, y, z, sum = 0;
    for (x = 1; x < 5; x++)
        for (y = 1; y < 5; y++)
            for (z = 1; z < 5; z++)
            {
                if (x != y && x != z && y != z)
                {
                    printf("%d%d%d\n", x, y, z);
                    ++sum;
                }
            }
    printf("sum=%d\n", sum);
}
void code2()
{ //题目：要求输出国际象棋棋盘
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                printf("%c%c", 219, 219);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void code3()
{ //题目：输入两个正整数m和n，求其最大公约数和最小公倍数
    int a, b, num1, num2, temp = 0;
    printf("please enter two numbers:\n");
    scanf("%d,%d", &num1, &num2); //这里是逗号，所以输入时也要写上逗号
    if (num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    a = num1;
    b = num2;
    while (b != 0)
    { //利用辗除法，直到b为0为止
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("最大公约数：%d\n", a);
    printf("最小公倍数：%d\n", num1 * num2 / a);
}
void code4()
{ //求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222
    int a, n, count = 1;
    long int sn = 0, tn = 0;
    printf("please input a and n\n");
    scanf("%d,%d", &a, &n);
    printf("a=%d,n=%d", a, n);
    while (count <= n)
    {
        tn = tn + a;
        sn = sn + tn;
        a = a * 10;
        ++count;
    }
    printf("a+aa+...=%ld\n", sn);
}
void code5()
{ //一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程找出1000以内的所有完数。
    static int k[10];
    int i, j, n, s;
    for (j = 2; j < 1000; j++) //3
    {
        n = -1;
        s = j;
        for (i = 1; i < j; i++)
        {
            if ((j % i) == 0)
            {
                n++;
                s = s - i;
                k[n] = i;
            }
        }
        if (s == 0) //即该数字本身减去其所有因子之后，等于0
        {
            printf("%d is a wanshu  ", j);
            for (i = 0; i < n; i++)
                printf("%d+", k[i]);
            printf("%d\n", k[n]);
        }
    }
}
void code6()
{
    float sn = 100.0, hn = sn / 2;
    int n;
    for (n = 2; n <= 10; n++)
    {
        sn = sn + 2 * hn;
        hn = hn / 2;
    }
    printf("%f, %f", sn, hn);
}
void code7()
{ //猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
    //以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
    /* int i, lastDay = 0, today = 1;
    for (i = 1; i < 10; i++)
    {
        lastDay = (today + 1) * 2;
        today = lastDay;
    }
    printf("%d", lastDay); */
    int day, x1, x2;
    day = 9;
    x2 = 1;
    while (day > 0)
    {
        x1 = (x2 + 1) * 2;
        x2 = x1;
        day--;
    }
    printf("the total is %d\n", x1);
}
void code8()
{ //两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。
    //有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单
    char i, j, k;
    for (i = 'x'; i <= 'z'; i++)
    {
        for (j = 'x'; j <= 'z'; j++)
        {
            for (k = 'x'; k <= 'z'; k++)
            {
                if (i != j && i != k && j != k)
                {
                    if (i != 'x' && k != 'x' && k != 'z')
                    {
                        printf("order is a-%c,b-%c,c-%c\n", i, j, k);
                    }
                }
            }
        }
    }
}
void code9()
{                           //有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和
    float up = 2, down = 1; //分子分母要是float，才会变成总和为float
    int i, temp;
    float sum = 2.00;
    for (i = 2; i <= 20; i++)
    {
        temp = up; //float必不可少，这样才能把原有的up值传递给down
        up = up + down;
        down = temp;
        sum = sum + (up / down);
    }
    printf("%.2f\n", sum);
}
int code10(int n)
{ //递归求阶乘，比如5!
    int sum;
    if (n == 0)
        sum = 1;
    else
        sum = n * code10(n - 1);
    return sum;
}
void code11(int n)
{ //利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
    char next;
    if (n <= 1)
    {
        next = getchar();
        //printf("\n\0:");
        putchar(next);
    }
    else
    {
        next = getchar();
        code11(n - 1);
        putchar(next);
    }
}
int code12(int n)
{ //有5个人，每个人比第二个人大2岁，最后一个人是10岁，递归求第一个人的岁数
    int lastMan = 0;
    if (n == 1)
        lastMan = 10;
    else
        lastMan = code12(n - 1) + 2;
    return lastMan;
}
void code13()
{ //给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字
    int n, i = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            i++;
            printf("%d", n % 10);
        }
        n /= 10; //注意这一点，通过整除，不断把n的个位数去掉
    }
    printf("%d", i);
}
void code14()
{ //一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
    long ge, shi, qian, wan, x;
    scanf("%ld", &x);
    wan = x / 10000;         //万位
    qian = x % 10000 / 1000; //千位
    shi = x % 100 / 10;      //十位
    ge = x % 10;             //个位
    if (ge == wan && shi == qian)
        puts("是回文");
    else
        puts("不是回文");
}
void code15(int *array, int n, int m)
{
    //有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
    int *p, array_end; //定义一个指针变量p，和一个变量array_end

    array_end = *(array + n - 1);           //将array中的最后一个元素的值赋给array_end,这一步需要提前做好
    for (p = array + n - 1; p > array; p--) //从数组最后一个元素开始向前,把前一个元素的值赋给后一个元素
    {
        *p = *(p - 1);
    }
    *array = array_end; //将array_end的值赋给第一个元素的值  因为之前将最后一个元素的值赋给了array_end
    m--;                // 通过m控制此函数执行几次  从而后移几个数

    if (m > 0)
    {
        code15(array, n, m); //递归调用，当循环次数m减至为0时，停止调用
    }
    int i;
}
void code16(int *p, int n)
{ //围成一圈，报数，数到3的人退出，求最后剩下的那个人是原来的第几个人
    int count = 0, i = 0, k = 0, rest = n;
    while (rest != 1)
    { // 当还剩下一位时
        if (*(p + i) != 0)
        {        // 说明这个数还没退出圈
            k++; //报数
            if (k == 3)
            {
                count++;      // 退出人数
                *(p + i) = 0; // 退出
                k = 0;
            }
        }
        i++;
        if (i == n)
        { // 这就形成一个圈了呀！
            i = 0;
        }
        rest = n - count;
    }
    /* int i, n, s = 0;//利用约瑟夫环问题来解决
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        s = (s + 3) % i;
    }
    printf("%d\n", s + 1); */
}
#define N 4
static struct man
{
    char name[20];
    int age;
} person[N] = {"li", 48, "wang", 39, "zhang", 34, "sun", 25};
void code17()
{ //求结构里age最大的那个。
    struct man *q, *p;
    int i, m = 0;
    p = person; //指针指向数组的第一个元素。

    for (i = 0; i < N; i++)
    {
        if (m < p->age)
        {
            q = p++; //必须用p指针，不能直接写person++，因为person是数组，不能用++表达式对数组大小进行修改。
        }
        m = q->age;
    }
    printf("%s,%d", (*q).name, (*q).age);
}
void code18(float arr[], int n)
{ //冒泡排序，对浮点数组进行降序排序
    int i, j;
    float temp;
    int exchange = 1; //交换标志,在不需要交换的情况下，可以提高排序效率
    for (i = 0; i < n; i++)
    {                 // 最多做n-1趟排序
        exchange = 0; // 本趟排序开始前，交换标志应为假
        for (j = n - 1; j >= i; j--)
        {
            if (arr[j + 1] > arr[j]) //对当前无序区R[i..n]自下向上扫描
            {
                temp = arr[j + 1]; //R[0]不是哨兵，仅做暂存单元
                arr[j + 1] = arr[j];
                arr[j] = temp;
                exchange = 1; // 发生了交换，故将交换标志置为真
            }
        }
        if (!exchange) // 本趟排序未发生交换，提前终止算法
            break;
    }
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
}
void code19()
{ //计算字符串中子串出现的次数
    char str1[20] = "hasdfssasdss";
    char str2[20] = "asd";
    char *p1, *p2;
    int num = 0;
    p1 = str1;
    p2 = str2;
    while (*p1 != '\0')
    {
        if (*p1 == *p2)
        {
            while (*p1 == *p2 && *p2 != '\0')
            {
                p1++;
                p2++;
            }
        }
        else
            p1++;
        if (*p2 == '\0')
            num++;
        p2 = str2;
    }
    printf("%d", num);
}
void code20()
{ //找出一个字符串中由同一个字符组成的最长子串
    char str[] = "Yummyyyyby";
    char *ptr = str;
    //printf("%p", ptr);//%p输出指针的地址，%s输出指针指向的值，即str的内容
    int len = 1, lenMax = 1, i;
    char ch;
    while (*ptr != '\0')
    {
        if (*ptr == *(ptr + 1))
            len++;
        else
        {
            if (lenMax < len)
            {
                lenMax = len;
                ch = *ptr;
            }
            len = 1;
        }
        ptr++;
    }
    printf("%d ", lenMax);
    for (i = 0; i < lenMax; i++)
        putchar(ch);
}
void code21(char *str, int len)
{ //递归实现字符串逆序输出
    assert(str);
    if (*str == '\0')
        return;
    else
        code21(str + 1, len - 1);
    printf("%c", *str);

    /*char food[] = "Yummyyyyby";////指针实现字符串逆序输出
    char *ptr;
    ptr = food + strlen(food);
    while (--ptr >= food) //指针比较，比的是地址，而数组中后一个元素的地址总是大于前一个
        putchar(*ptr);    //反转字符串，反向打印一个字符数组 */
}

int main()
{
    char str[] = "asdfg";
    code21(str, 5);

    //float ar[] = {1.1, 1.3, 4.3, 2.3, 3.3};
    //code18(ar, 5);
    /* float *p = ar - 1;//指针正序打印数组元素
    while (++p <= ar + 4)
    {
        printf("%.2f ", *p);
    } */

    /* int n = 1;
    while (n++ < 4) //++放在n的前面和后面的区别在于，++n则n的值为2、3，n++则n的值为2、3、4
        printf("%d", n);//while里的++，初始的值不会算上去
    for (n = 1; n < 4; n++)//无论++在n的前面还是后面，n的值都为1、2、3
        printf("%d", n); */

    /* int n = 1;
    int *p = &n; //这个&必不可少，整数转换成指针要加上&取地址
    printf("%d", *p); */

    //printf("%d", code12(5));

    /* int num[5] = {1, 2, 3, 4, 5};
    code15(num, 5, 2);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", num[i]);
    } */

    return 0;
}
