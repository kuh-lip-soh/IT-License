#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(!n)
        return 1;
    int i,f=1;
    for(i=n; i>1; i--)
        f*=i;
    return f;
}

void TriangleDePascal(int n)
{
    int i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=i; j++)
            printf("%3.d",fact(i)/(fact(j)*fact(i-j)));
        printf("\n");
    }
}

int main()
{
    int n;
    do{
    printf("N = ");
    scanf("%d",&n);
    }while(n<=0);
    TriangleDePascal(n);
    return 0;
}
