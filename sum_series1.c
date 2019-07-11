// 1+2+3+4+5+.......+n = sum

#include <stdio.h>

void main()
{
    int lastNum, sum = 0;
    printf("Enter last Number :");
    scanf("%d", &lastNum);

    for (int i = 1; i <= lastNum; i++)
    {
        sum = sum + i;
        if (i == 1)
        {
            printf("1");
        }else
        {
            printf(" + %d",i);
        }
    }
    printf(" = %d", sum);
}
/*
    Output =>
Enter last Number :15
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 = 120
 */