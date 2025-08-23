#include <stdio.h>

//求一个半径为r的球的体积
int main()
{
    double r = 0;
    double v = 0;
    double pi = 3.1415926;
    
    scanf("%lf",&r);

    v = (4/3.0)*pi*(r*r*r);
    printf("%.3lf\n",v);

    return 0;

}