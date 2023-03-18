#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double GetPi(int d)
{
    double p;
    d++;
    int n,i;
    n=3+d/log10(2);
    p=2*n;
    for(i=1; n>=2; i++)
    {
        p/=(2*n-1);
        p*=(n-1);
        p+=2;
        printf("%.50lf\n",p);
        n--;
    }
    return p;

}

int main()
{
    int d,i;
    double p;
    printf("D = ");
    scanf("%d",&d);
    p=GetPi(d);
    int Pi[d];
    for(i=0; i<d; i++)
    {
        if(i)
        {
            p*=10;
            Pi[i]=p;
            Pi[i]=Pi[i]%10;
        }
        else
            Pi[i]=p;
    }
    /*for(i=0; i<d; i++)
    {
        if(i)
            printf("%d",Pi[i]);
        else
            printf("%d.",Pi[i]);
    }*/
    printf("\n%.50f",M_PI);
    return 0;
}
