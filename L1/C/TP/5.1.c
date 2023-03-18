#include <stdio.h>
#include <stdlib.h>

void main ()
{
int a=10,b=5,*p;
printf("a = %d, b = %d sont deux variables entieres et *p est un entier\n",a,b);
printf("&a est l'adresse de a --> %p\n",&a);
printf("&b est l'adresse de b --> %p\n",&b);
p=&a;
printf("p stocke l'adresse de a --> %p\n",p);
printf("*p stocke la valeur de a --> %d\n",*p);
printf("&p est l'adresse de p --> %p\n",&p);
b=2**p;
printf("b stocke le double de la valeur de *p --> %d\n",b);
*p=b;
printf("p pointe maintenant sur b --> %p\n",p);
printf("*p stocke la valeur de b --> %d\n",*p);
}

