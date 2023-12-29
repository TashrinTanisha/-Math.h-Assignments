#include<stdio.h>
int main()
{
    double x,y;

    printf("Enter x & y : ");
    scanf("%lf %lf",&x,&y);

    double power = pow(x,y);

    printf("The x(%.2lf) to the power y(%.2lf) is : %.2lf",x,y,power);

    return 0;
}
