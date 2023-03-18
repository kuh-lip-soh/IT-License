#include <stdio.h>
#include <stdlib.h>

int SommeDiviseurs (int n)
{
    int i,s=0;
    for(i=1; i<n; i++)
        if(!(n%i))
            s+=i;
    return s;
}

int MonAmi (int n)
{
    int i,s=0,m=SommeDiviseurs(n);
    for(i=1; i<m; i++)
        if(!(m%i))
            s+=i;
            printf("Somme = %d\n",s);
    if(s==n)
        return m;
    else
        return 0;
}

int main()
{
    int n,m;
    do
    {
        printf("Donnez n : ");
        scanf("%d",&n);
    }
    while(n<=0);
    do
    {
        printf("Donnez m : ");
        scanf("%d",&m);
    }
    while(n<=0);
    if((m=MonAmi(n))==n)
        printf("%d n'a pas de nombres ami",n);
    else if(m)
        printf("%d a %d comme nombre ami",n,m);
    else
        printf("%d n'a pas de nombres ami",n);
    return 0;
}
