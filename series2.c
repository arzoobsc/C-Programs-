// 2,4,6,8,.........,n.
#include <stdio.h>

void main()
{
    int lastNum;
    printf("Enter last Number :");
    scanf("%d", &lastNum);
    for (int i = 2; i <= lastNum; i += 2)
    {
        printf("%d\n", i);
    }
}