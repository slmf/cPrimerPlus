#include <stdio.h>
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

    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    /* printf("zippo=%p,   zippo+1=%p\n", zippo, zippo + 1);
    printf("zippo[0]=%p, zippo[0]+1=%p\n", zippo[0], zippo[0] + 1);
    printf("*zippo=%p,   *zippo+1=%p\n", *zippo, *zippo + 1);
    printf("zippo[0][0]=%d\n", zippo[0][0]);
    printf("*zippo[0]=%d\n", *zippo[0]);
    printf("**zippo=%d\n", **zippo);
    printf("  zippo[2][1]=%d\n", zippo[2][1]);
    printf("*(*(zippo+2)+1)=%d\n", *(*(zippo + 2) + 1)); */

    int(*pz)[2];
    pz = zippo;
    printf("  pz=%p,  pz+1=%p\n", pz, pz + 1);
    printf("pz[0]=%p,pz[0]+1=%p\n", pz[0], pz[0] + 1);

    return 0;
}