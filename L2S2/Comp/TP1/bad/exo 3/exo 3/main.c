#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10]={25,64,0,12,63,75,99,02,-5,34};

int a=t[0];
			int i;
			for(i=1;i<10;i++)
			{
				if(a<t[i])
				a=t[i];
			}
			printf("%d est la plus grande valeure du tableau\n",a);
    return 0;
}
