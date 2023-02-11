

#include <stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e;
    printf("enter marks \n");
    scanf("%d%d%d%d%d,",&a,&b,&c,&d,&e);
    int t=a+b+c+d+e;
    printf("total marks : %d\n",t);
    printf("average marks : %f\n",t/2.0);
    printf("percentage of marks : %f\n",(t/500.0)*100);
}

