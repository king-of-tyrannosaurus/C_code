#include <stdio.h>

//一个简单的函数
int test()
{
    static int a = 1;//静态，值会被保留
    a++;
    return a;
}

int main()
{
    int x = 0;
    int res = 0;
    
    while (x<10)
    {
        res = test();
        x++;
    };
    
    printf("%d",res);
    return 0;
}