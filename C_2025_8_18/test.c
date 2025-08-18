#include <stdio.h>

//输出四个数的最大值
int main()
{
    int i = 0;
    int arr[4] = {0};//初始化数组4个元素为0
    int tmp = 0;
    
    for(i = 0;i < 4;i++)
    {
        scanf("%d",&arr[i]);
        
    }

    for(i = 0;i < 4;i++)
    {
        if(tmp < arr[i])
        {
            tmp = arr[i];
        }
    }

    printf("%d\n",tmp);
    return 0;
}