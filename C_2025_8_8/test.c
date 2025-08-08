
#include <stdio.h>
//宏
#define sum(x,y) x+y 

int main()
{
    int a = 1;
    int b = 2;
    
    int c = sum(a,b);
    
    printf("%d",c);//3
}
