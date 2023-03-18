#include <stdio.h>
#include <stdlib.h>

void test()
{
    int a=1,*p=&a;
    printf("\n\na=%d et *p=a=%d\n\n",a,*p);
    a=++*p;
    printf("a=++*p --> a=%d *p=%d\n\n",a,*p); /* A recoit *p++ (même chose que ++(*p))*/
    a=1,*p=a;
    a=(*p)++;
    printf("a=(*p)++ --> a=%d *p=%d\n\n",a,*p); /* A recoit *p++ */
    a=1,*p=a;
    printf("avant : a=*p++ --> a=%d *p=%d &a=%p\n\n",a,*p,p);
    a=*p++;
    printf("apres : a=*p++ --> a=%d *p=%p &a=%p\n\n",a,*p,p); /* A recoit *p, et p pointe sur &a++ */
}
void main()
{
    int i=2;
    while(i!=0 && i!=1)
    {
        printf("\nMode de test (0), Mode normal (1)\n");
        scanf("%d",&i);
    }
    if (i==0)
    {
        test();
        return 0;
    }
    int A=1, B=3, C=5;
    int *P1=&A, *P2=&B, *P3=&C;
    printf("\n\nP1=%d, *P2=%d, *P3=%d\n",*P1,*P2,*P3);
    *P2=++(*P3);
    printf("A=%d, B=%d, C=%d\n",A,B,C);     /* Ligne 6 - C s'incremente, puis B recois C */
    *P2=(*P3)++;
    printf("*P1=%d, *P2=%d, *P3=%d\n",*P1,*P2,*P3); /* Ligne 8 - B recois C, puis C s'incremente */
    printf("P1=%p, P2=%p, P3=%p\n",P1,P2,P3);
    *P2=10-*P3++;
    printf("*P1=%d, *P2=%d, *P3=%d\n",*P1,*P2,*P3); /* Ligne 11 - B recois 10-C, puis P3 pointe sur &C++=&B */
    printf("P1=%p, P2=%p, P3=%p\n",P1,P2,P3);
    *P3=*P2**P3;
    printf("*P1=%d, *P2=%d, *P3=%d\n",*P1,*P2,*P3);
    *P2=++*P1**P3++;
    printf("*P1=%d, *P2=%d, *P3=%d\n",*P1,*P2,*P3);
    printf("P1=%p, P2=%p, P3=%p\n",P1,P2,P3); /* Ligne 17 - *P1 s'incremente, *P2 recois *P1**P3, puis P3 pointe sur &B++=&A */
}
