#include <stdio.h>

//scanf
int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    
    scanf("%4d%2d%2d",&year,&month,&day);//分别读取4，2，2个字符

    printf("year=%d\n",year);
    printf("month=%02d\n",month);//不足10时打印为0x格式
    printf("day=%02d\n",day);


    return 0;
}