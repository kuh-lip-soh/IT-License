#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,b=0,c=0,a=0,l,k;
    printf("donner un entier naturel ");
    scanf("%d",&i);

        b = i/100;
        i = i-(b*100);
        a = i/10;
        c=i-(a*10);
        l= (a*10)+c;
		if( l>10 && l<20)
		k=1;
        if (b!=0){
        	if(b== 2){
			printf("deux ");}
			if (b==3){
 			printf("trois ");}
 			if (b==4){
			printf("quatre ");}
			if (b== 5){
			printf("cinq ");}
 			if (b== 6){
			printf("six ");}
 			if (b== 7){
			printf("sept ");}
			if (b== 8){
			printf("huit ");}
 			if (b== 9){
			printf("neuf ");}
 		printf("cent ");}
 		if (a!=0){
        	if(a==1 && !k)
			printf("dix ");
			if(l==11)
			printf("onze");
			if(l==12)
			printf("douze");
			if(l==13)
			printf("treize");
			if(l==14)
			printf("quatorze");
			if(l==15)
			printf("quinze");
			if(l==16)
			printf("seize");
			if(l==17)
			printf("dix_sept");
			if(l==18)
			printf("dix_huit");
			if(l==19)
			printf("dix_neuf");
			if(a==2)
			printf("vingt");
        	if(a==3)
			printf("trente ");
			if (a==4)
 			printf("quarante ");
			if (a==5)
			printf("cinquante ");
 			if (a==6)
			printf("soixante ");
 			if (a==7)
			printf("soixante-dix ");
			if (a==8)
			printf("quatre-vingts ");
 			if (a==9)
			printf("quatre-vingt-dix ");}
		if (c!=0 && k==0)
		{
			if (c==1){
			printf("un ");}
        	if(c== 2){
			printf("deux ");}
			if (c==3){
 			printf("trois ");}
 			if (c==4){
			printf("quatre ");}
			if (c== 5){
			printf("cinq ");}
 			if (c== 6){
			printf("six ");}
 			if (c== 7){
			printf("cept ");}
			if (c== 8){
			printf("huit ");}
 			if (c== 9){
			printf("neuf ");}
		}
    return 0;
}
