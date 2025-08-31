#include <stdio.h>

//二分法找下标
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int k = 7;
    int right = sz - 1;
    int left = 0;
    
    while(right >= left)
    {
        
        int mid = (right+left)/2;

        if(arr[mid] < k)
        {
            left = mid + 1;
        }
        
        else if(arr[mid] > k)
        {
            right = mid - 1;
        }
        
        else
        {
            printf("数字的下标是%d\n",mid);
            break;
        }
    }
    if(left > right)
    {
        printf("找不到");
    }

    return 0;
}
