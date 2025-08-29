#include <stdio.h>

//计算1!-n!之和
int main()
{
    int n = 1;
    int r = 1;
    int i = 1;
    int sum = 0;

    for(n = 1;n <= 10;n++)
    {
        r = 1;
        for(i = 1;i <= n;i++)
        {
            r = r*i;
        }
        sum = sum + r;
    }
    printf("%d\n",sum);
    return 0;
}