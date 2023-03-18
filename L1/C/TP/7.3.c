#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

void S_Maj ( char s[] )
{
    int l=strlen(s);
    for(i=0; i<l; i++)
    {
        if('z'>=s[i] && s[i]>='a')
            s[i]-='a'-'A';
    }
}
void CDCesar ( char m[], int k )
{
    S_Maj(m);
    int l=strlen(m);
    for (i=0; i<l; i++)
        if(m[i]<='Z' && m[i]>='A')
        {
            m[i]+=k;
            if(m[i]>'Z')
                m[i]-=26;
            if(m[i]<'A')
                m[i]+=26;
        }

}
void DSCCesar ( char m[])
{
    S_Maj(m);
    int j, l=strlen(m);
    char c[1000];
    for (j=0; j<26; j++)
    {
        for (i=0; i<l; i++)
            if(m[i]<='Z' && m[i]>='A')
            {
                c[i]=m[i]- j;
                if(c[i]<'A')
                    c[i]=c[i]+26;
            }
            else
                c[i]=m[i];
        printf("%d-%s\n",j,c);
    }
}

void CACesar ( char m[], char a[])
{
    char b[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    S_Maj(m);
    int j, l=l=strlen(m);
    for (i=0; i<l; i++)
        for(j=0; j<26; j++)

            if(m[i]==b[j])
            {
                m[i]=a[j];
                j=26;
            }

}

int main()
{
    int k,l;
    printf("Que souhaitez-vous faire ?\n1-Coder un texte.\n2-Decoder un texte.\n3-Decoder un texte sans cle.\n4-Coder un texte avec un alphabet de cryptage.\n");
    scanf("%d",&l);
    switch(l)
    {
    case 1 :
    {
        printf("\nSaisissez le texte que vous voulez coder :\n");
        char m[1000];
        scanf("%d",&l);
        gets(m);
        printf("Saisissez la cle de codage : ");
        scanf("%d",&k);
        CDCesar(m,k);
        printf("\nVoici votre message code :\n%s\n\n",m);
        break;
    }
    case 2 :
    {
        printf("\nSaisissez le texte que vous voulez decoder :\n");
        char m[1000];
        scanf("%d",&l);
        gets(m);
        printf("Saisissez la cle de codage : ");
        scanf("%d",&k);
        CDCesar(m,-k);
        printf("\nVoici votre message decode :\n%s\n\n",m);
        break;
    }
    case 3 :
    {
        printf("\nSaisissez le texte que vous voulez decoder :\n");
        char m[1000];
        scanf("%d",&l);
        gets(m);
        DSCCesar(m);
        printf("La cle qui permet de decoder votre texte est la cle ");
        scanf("%d",&k);
        break;
    }
    case 4 :
    {
        char m[1000], a[27];
        printf("Saisissez votre alphabet de cryptage :\n");
        scanf("%d",&l);
        gets(a);
        S_Maj(a);
        printf("Saisissez votre texte a coder :\n");
        gets(m);
        CACesar(m,a);
        printf("\nVoici votre message code :\n%s\n\n",m);
        break;
    }
    }
    return 0;
}
