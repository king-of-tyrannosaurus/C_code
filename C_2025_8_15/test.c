#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
    int sz = sizeof(arr)/sizeof(arr[0]);//求得数组长度
    // int sz = strlen(arr);
    for( int i = 0;i < sz;i++)
    {
        printf("%c",arr[i]);//I can do it！
    }
    
    return 0;
}