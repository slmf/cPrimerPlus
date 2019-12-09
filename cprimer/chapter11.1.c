#include <stdio.h>
#include <string.h>
#define STLEN 10
#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char *strings[], int num);
char *s_gets(char *st, int n);
void put1(const char *);
int put2(const char *);
int main()
{
    /* char words[STLEN];
    int i;
    puts("enter strings(empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;//遍历字符串，直到遇到换行符或空字符
        if (words[i] == '\n')
            words[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done"); */

    /* put1("if i'd as much money");
    put1(" as i could spend,\n");
    printf("i count %d characters.\n",
           put2("i never would cry old chairs to mend.")); */

    /* char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("what is your favourite flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("end of file");
    puts("bye"); */

    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;
    printf("input up to %d lines,and i will sort them.\n", LIM);
    printf("to stop,press the enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    stsrt(ptstr, ct);
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);

    return 0;
}

void stsrt(char *strings[], int num)
{
    char *temp;
    int top, seek;
    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

char *s_gets(char *st, int n) //fgets()函数的升级版,如果字符串中出现换行符，
//就用空字符替换它。如果字符串中出现空字符，就丢弃该输入行的其余字符。
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
void put1(const char *string)
{
    while (*string)
        putchar(*string++);
}
int put2(const char *string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); //单引号
    return (count);
}
