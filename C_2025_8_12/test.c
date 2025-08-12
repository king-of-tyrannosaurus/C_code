#include <stdio.h>

void test(int x)
{
    if(x % 2 == 1)//if语句
    {
        printf("%d\n",x);
    }

}

int main()
{
    int a = 1;
    while(a < 100)//while循环，a<100为假时结束循环
    {
       test(a);
       a++;//后置++，先使用后加1，a = a+1;
    }
    return 0;
}