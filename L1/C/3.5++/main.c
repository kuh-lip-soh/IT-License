#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,n,m;
    for(n=100;n<1000;n++)
    {
    c=n%10;    m=(n-c)/10;
    b=m%10;    m=(m-b)/10;
    a=m%10;
    if(n==(pow(a,3)+pow(b,3)+pow(c,3)))
        printf("%d est cubique car %d=%d^3+%d^3+%d^3\n",n,n,a,b,c);
    }
    return 0;
}
