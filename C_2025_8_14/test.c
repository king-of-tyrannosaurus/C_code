#include <stdio.h>

//确认密码
int main() 
{
    char pw[20] = {0};//定义一个数组
    printf("请输入密码：");
    scanf("%s",pw);
    int c;
    
    while((c = getchar()) != '\n' && c != EOF);
    
    printf("请确认密码Y/N：");
    int ret = getchar();
    
    if(ret == 'Y')
    {
        printf("密码正确\n");
    }
    else
    {
        printf("密码错误\n");
    }
    
    return 0;

}