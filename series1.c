// 1+2+3+4+.........+n.

#include<stdio.h>

void main(){
    int lastNum;
    printf("Enter last Number :");
    scanf("%d",&lastNum);

    for (int i = 1; i <= lastNum; i++)
    {
        printf("%d\n",i);
    }
    
}