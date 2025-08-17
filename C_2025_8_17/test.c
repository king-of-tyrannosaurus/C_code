#include <stdio.h>

//double
int main()
{
    int num = 0;
    double C = 0;//double比float精度更高
    double math = 0;
    double eng = 0;
    
    scanf("%d;%lf,%lf,%lf",&num,&C,&math,&eng);//%lf为double输入格式

    printf("The each sunject of NO.%d is %.2lf,%.2lf,%.2lf",num,C,math,eng);//%.2lf，保留两位小数

    return 0;
}