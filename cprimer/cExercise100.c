//出自：https://wenku.baidu.com/view/48e09ef2bd64783e08122b18.html?sxts=1578391242618
#include <stdio.h>

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

int main()
{
    //printf("%d", code12(5));
    code13();

    return 0;
}
