#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,i,j=1;
        printf("n=");
        scanf("%d",&n);
    do
    {
        printf("d=");
        scanf("%d",&d);
    }
    while(d==0);
    for(i=2;i<n/2;i++)
        if(!(n%i) && !(d%i))
            j=i;
    printf("Fraction initiale : %d/%d\nFraction simplifiee : %d/%d",n,d,n/j,d/j);
    return 0;
}
