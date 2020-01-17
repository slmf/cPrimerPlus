#include <stdio.h>

int main()
{
    char str1[8] = "abcdefg";
    char str2[4] = "000";
    int i, n = 0;
    for (i = 1; i < 8; i++)
    {
        //n = i / 2;
        if (i % 2 == 0)
        {
            str2[n++] = str1[i];
        }
    }
    str2[4] = '\0';
    puts(str1);
    puts(str2);

    return 0;
}
