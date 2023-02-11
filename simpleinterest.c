

#include <stdio.h>
#include<math.h>
void main()
{
    int p,r,t;
    printf("enter principle,rate and time \n");
    scanf("%d%d%d,",&p,&r,&t);
    float s=(p*r*t)/100;
    printf("simple interest: %f\n",s);
}
