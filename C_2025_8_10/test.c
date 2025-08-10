#include <stdio.h>

//一个简单的计算
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    if(a <= 0 || a>10000 || b <= 0 || b>10000)
    {
        printf("范围不正确");
        return 1;
    }
    
    int x,y;
    
    x = a/b;//得整数部分
    y = a%b;//得余数部分
    
    printf("%d %d\n",x,y);
    return 0;
}