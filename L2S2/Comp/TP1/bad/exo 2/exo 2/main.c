#include <stdio.h>
#include <stdlib.h>
void permutation(int *a, int *b)
{
    int c=*a;
    *a = *b;
    *b = c;}
int main()
{   int n1,n2;
    printf ("entrer a avant permutation: ") ; scanf("%d",&n1);
    printf ("entrer b avant permutation: ") ; scanf("%d",&n2);
    permutation(&n1,&n2);
    printf ("\nentrer a avant permutation: %d,",n1) ;
    printf ("\nentrer b avant permutation: %d",n2) ;

    return 0;
}
