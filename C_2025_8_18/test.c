#include <stdio.h>
//输出四个数的最大值
int main()
{
    int arr[4] = {0};//初始化数组4个元素为0
    // int n = 0;
    for(int i = 0;i < 4;i++)
    {
        scanf("%d",&arr[i]);
        
    }

    int max = arr[0];
    int i = 1;
    while(i<4)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            i++;
        }
        i++;
    }
    printf("%d\n",max);
    return 0;
}