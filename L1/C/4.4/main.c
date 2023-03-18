#include <stdio.h>
#include <stdlib.h>

void Swap(int *n, int *m)
{
    *n+=*m;
    *m=*n-*m;
    *n-=*m;

}

int main()
{
    int n,m;
    printf("Donnez n et m :\n");
    scanf("%d %d",&n,&m);
    Swap(&n,&m);
    printf("n = %d et m = %d",n,m);
    return 0;
}
