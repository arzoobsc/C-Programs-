// 2+4+6+8+........+n = sum.

#include<stdio.h>
void main(){
    int lastNum,sum = 0;
    printf("Enter last Number :");
    scanf("%d",&lastNum);

    for (int i = 2; i <= lastNum; i =i+2)
    {
        sum = sum + i;
        if (i == 2)
        {
            printf("2");
        }else
        {
            printf(" + %d",i);
        }
        
        
    }
    
    printf(" = %d",sum);
}
/*
    Output =>
Enter last Number :10
2 + 4 + 6 + 8 + 10 = 30
 */