#include <stdio.h>
#define ROWS 3
#define COLS 4
int sum2d(int rows, int cols, int ar[rows][cols]);
//指针操作
int main()
{
    /* int urn[5] = {100, 200, 300, 400, 500}; //程序清单10.13
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];

    printf("pointer value,dereferenced pointer,pointer address:\n");
    printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1); //&给出指针本身的地址

    ptr3 = ptr1 + 4; //指针加法
    printf("\nadding an int to a pointer:\n");
    printf("ptr1+4=%p,*(ptr1+4)=%d\n", ptr1 + 4, *(ptr1 + 4));

    ptr1++; //指针递增
    printf("\nvalues after ptr1++:\n");
    printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);

    ptr2--; //指针递减
    printf("\nvalues after ptr2--:\n");
    printf("ptr2=%p,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
    --ptr1;
    ++ptr2; */

    //int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    /* printf("zippo=%p,   zippo+1=%p\n", zippo, zippo + 1);
    printf("zippo[0]=%p, zippo[0]+1=%p\n", zippo[0], zippo[0] + 1);
    printf("*zippo=%p,   *zippo+1=%p\n", *zippo, *zippo + 1);
    printf("zippo[0][0]=%d\n", zippo[0][0]);
    printf("*zippo[0]=%d\n", *zippo[0]);
    printf("**zippo=%d\n", **zippo);
    printf("  zippo[2][1]=%d\n", zippo[2][1]);
    printf("*(*(zippo+2)+1)=%d\n", *(*(zippo + 2) + 1)); */

    /* int(*pz)[2];
    pz = zippo;
    printf("  pz=%p,  pz+1=%p\n", pz, pz + 1);
    printf("pz[0]=%p,pz[0]+1=%p\n", pz[0], pz[0] + 1);
    printf("pz[2][1]=%d, *(*(pz+2)+1)=%d\n", pz[2][1], *(*(pz + 2) + 1)); */

    int i, j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}};
    int morejunk[ROWS - 1][COLS + 2] = {
        {20, 30, 40, 50, 60, 70},
        {5, 6, 7, 8, 9, 10}};
    int varr[rs][cs]; //变长数组
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            varr[i][j] = i * j + j;

    printf("3x5 array\n");
    printf("sum of all elements=%d\n", sum2d(ROWS, COLS, junk));
    printf("2x6 array\n");
    printf("sum of all elements=%d\n", sum2d(ROWS - 1, COLS + 2, morejunk));
    printf("3x10 array\n");
    printf("sum of all elements=%d\n", sum2d(rs, cs, varr));
    printf("he");

    return 0;
}
int sum2d(int rows, int cols, int ar[rows][cols])
{
    int r, c;
    int tot = 0;
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            tot += ar[r][c];
    return tot;
}