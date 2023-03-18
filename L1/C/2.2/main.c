#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p;
    printf("Combien de photocopies voulez-vous ?\n");
    scanf("%d",&n);
    if(n>30)
        p=130+(n-30)*3;
        else if(n>10)
            p=50+(n-10)*4;
            else
                p=n*5;
    printf("\nPrix : %d Da",p);
    return 0;
}
