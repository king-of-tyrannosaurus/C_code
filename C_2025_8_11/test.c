#include <stdio.h>

//返回值
int test(int x)
{
    //if判断语句
    if(x == 3)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    int a = 0;
    
    scanf("%d",&a);
    int r = test(a);//接收返回值赋给r
    
    printf("%d",r);
    
    return 0;
}