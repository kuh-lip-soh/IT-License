#include <stdio.h>
#include <stdlib.h>

void addSpace(char* s)
{
	int i;
	int l=strlen(s);
	for(i=0;i<2*l;i++)
	{
		if ()
		
	}
}

void afficheChaine (char* s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	printf("%c",s[i]);
	
}

int main(int argc, char *argv[]) {
	int a,b;
	int t[11]={25,64,0,12,63,75,99,02,-5,34};
	int *p1,*p2,*p3;
	char* s;
	/*printf("Donnez 2 nombres entiers :\n");
	scanf("%d",&a);
	scanf("%d",&b);*/
	char c;
	system("cls");
	printf("A:Addition\n");
	printf("S:Soustraction\n");
	printf("M:Multiplication\n");
	printf("D:Division\n");
	printf("E:Echange\n");
	printf("T:Maximum du tableau\n");
	printf("C:Chaine de charactere\n");
	//scanf("%c",&c);
	scanf("%c",&c);
	if(c>='a' && c<='z')
	 c=c-32;
	switch(c)
	{
		case 'A' :
			printf("%d + %d = %d",a,b,a+b);
			break;
		case 'S' :
			printf("%d - %d = %d",a,b,a-b);
			break;
		case 'M' :
			printf("%d x %d = %d",a,b,a*b);
			break;
		case 'D' :
			if(b==0)
			{
			printf("Erreur !\n");
			break;
			}
			printf("%d / %d = %lf",a,b,(double)a/b);
			break;
		case 'E' :
			printf("a = %d et b = %d\n",a,b);
			p1=&a; p2=&b;
			p3=p1;
			p1=p2;
			p2=p3;
			printf("et maintenant\na = %d et b = %d",*p1,*p2);
			break;
		case 'T' :
			a=t[0];
			int i;
			for(i=1;i<10;i++)
			{
				if(a<t[i])
				a=t[i];
			}
			printf("%d est la plus grande valeure du tableau\n",a);
			break;
		case 'C' :
			printf("Donnez une phrase :\n");
			scanf("%s",&s);
			addSpace(s);
			afficheChaine(s);
			break;
		default :
		printf("Erreur !");
		break;
	}
}
