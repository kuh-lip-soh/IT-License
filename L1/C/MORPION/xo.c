#include <stdio.h>
#include <stdlib.h>

char tbl(char a[],int c,char b)
{
    char tour=(c%2==0)?'X':'O';
    if(b=='1')
        a[0]=tour;
    else if(b=='2')
        a[1]=tour;
    else if(b=='3')
        a[2]=tour;
    else if(b=='4')
        a[3]=tour;
    else if(b=='5')
        a[4]=tour;
    else if(b=='6')
        a[5]=tour;
    else if(b=='7')
        a[6]=tour;
    else if(b=='8')
        a[7]=tour;
    else if(b=='9')
        a[8]=tour;
    return tour;
}
void affv(void)
{
    printf("   %d | %d | %d\n",1,2,3);
    printf("  ---+---+---\n");
    printf("   %d | %d | %d\n",4,5,6);
    printf("  ---+---+---\n");
    printf("   %d | %d | %d\n",7,8,9);
}
void aff(char a[])
{
    system("cls");
    printf("   %c | %c | %c\n",a[0],a[1],a[2]);
    printf("  ---+---+---\n");
    printf("   %c | %c | %c\n",a[3],a[4],a[5]);
    printf("  ---+---+---\n");
    printf("   %c | %c | %c\n",a[6],a[7],a[8]);
}
int verif(char a[], char b)
{
    for(int i=0;i<7;i+=3)
    {
        if(a[i]==b && a[i+1]==b && a[i+2]==b)
            return 0;
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]==b && a[i+3]==b && a[i+6]==b)
            return 0;
    }
}
int main()
{
    char a[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '},b,e;
    int c=0;
    affv();
    do
    {
        scanf(" %c",&b);
        e=tbl(a,c,b);
        aff(a);
        c++;
    }
    while(verif(a,e));
}
