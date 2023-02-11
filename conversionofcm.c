

#include <stdio.h>

int main()
{
    int a;
    printf("enter length in cm\n");
    scanf("%d",&a);
    printf("length in meter is %f\n",a/100.0);
    printf("length in kilometer is %f\n",a/100000.0);
}
