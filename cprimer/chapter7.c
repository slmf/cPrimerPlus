#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    /* char ch;//7.1
    int sp_ct = 0;
    int nl_ct = 0;
    int other = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            sp_ct++;
        else if (ch == '\n')
            nl_ct++;
        else
            other++;
    }
    printf("spaces:%d,newlines:%d,others:%d\n", sp_ct, nl_ct, other); */

    /* int n;//7.3
    double sumeven = 0.0;
    int ct_even = 0;
    double sumodd = 0.0;
    int ct_odd = 0;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        if (n % 2 == 0)
        {
            sumeven += n;
            ++ct_even;
        }
        else
        {
            sumodd += n;
            ++ct_odd;
        }
    }
    printf("number of evens:%d", ct_even);
    if (ct_even > 0)
        printf("  average:%g\n", sumeven / ct_even);
    printf("number of odds:%d", ct_odd);
    if (ct_odd > 0)
        printf("  average:%g\n", sumodd / ct_odd);
    printf("\ndone\n"); */

    /* char ch;//7.6
    int ct1 = 0;
    int ct2 = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            ++ct1;
            break;
        case '!':
            putchar('!');
            putchar('!');
            ct2++;
            break;
        default:
            putchar(ch);
        }
    }
    printf("%d replacements of . with !\n", ct1);
    printf("%d replacements of ! with !!\n", ct2); */

    char ch; //7.6
    bool e = 0;
    int eiCount = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
            e = 1;
        if (ch == 'i' && e == 1)
        {
            eiCount++;
            e = 0;
        }
        if (ch != 'e' && ch != 'i')
            e = 0;
    }
    printf("eicount:%d\n", eiCount);

    return 0;
}