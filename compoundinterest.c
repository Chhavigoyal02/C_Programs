

#include <stdio.h>
#include<math.h>
void main()
{
    int p,r,n,t;
    printf("enter principle,rate,number of times and time \n");
    scanf("%d%d%d%d,",&p,&r,&n,&t);
    int a=p*(1+r/n);
    int b=n*t;
    double c=pow(a,b);
    printf("compound interest: %lf\n",c);
}
