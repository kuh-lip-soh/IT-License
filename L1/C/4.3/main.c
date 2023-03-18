#include <stdio.h>
#include <stdlib.h>

int EstDivisible (int n,int m)
{
    if(n%m)
        return 0;
    return 1;
}

int SommeDiviseurs(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        if(EstDivisible(n,i))
        s+=i;
    return s;
}

int EstPremier(int n)
{
    if(SommeDiviseurs(n)==n+1)
        return 1;
    return 0;
}

int ProchainPremier (int n)
{
    for(n++;n;n++)
        if(EstPremier(n))
        return n;
}

int main()
{
    int n;
    do{
    printf("N = ");
    scanf("%d",&n);
    }while(n<=0);
    if(EstPremier(n))
    printf("%d est un nombre premier\n",n);
    else
        printf("%d n'est pas un nombre premier\n",n);
    printf("Le prochain nombre premier apres %d est %d",n,ProchainPremier(n));
    return 0;
}
