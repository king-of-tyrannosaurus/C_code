#include <stdio.h>

//getchar putchar
int main()
{
    char ch = '\0';
    
    //getchar，输入单个字符
    while((ch = getchar()) != EOF)//!= 不等于
    {
        if (ch < '0' || ch > '9') //|| 或
            continue;//从此处跳出循环执行下一次循环

        putchar(ch);//打印ch
    }
    
    return 0;
}