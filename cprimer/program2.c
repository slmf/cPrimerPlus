#include <stdio.h>

int main()
{
    char str1[8] = "abcdefg";
    char str2[4];
    int i, n = 0;
    for (i = 1; i < 8; i++)
    {
        //n = i / 2;
        if (i % 2 == 0)
        {
            str2[i / 2] = str1[i];
        }
    }
    for (i = 0; i < 4; i++)
    {
        str2[i] = str2[i + 1];
    }

    str2[4] = '\0';
    puts(str1);
    puts(str2);

    return 0;
}
