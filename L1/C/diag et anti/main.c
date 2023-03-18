#include <stdio.h>
//#include <stdlib.h>

void delay(void)
{
    for(int i=0; i<100000; i++)
    {
        for(int j=0; j<100000; j++)
        {

        }
    }
}
/*int recur(int terms)
{
    if(!terms)
    {
        return 0;
    }

    return terms+recur(terms-1);

}*/

void main()
{
    printf("start\n");
    delay();
    printf("end\n");
}
