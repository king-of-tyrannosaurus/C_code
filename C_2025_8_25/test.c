#include <stdio.h>

//do while循环
int main()
{
    int i = 0;
    do
    {
        if(i == 5)
            continue;
        
        printf("haha\n");
        i++;
    }
    while (i<10);
   
    return 0;
}