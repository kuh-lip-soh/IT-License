#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int a,b;
    scanf("%d",&a); scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d, b=%d",a,b);

}
