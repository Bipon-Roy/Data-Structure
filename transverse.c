#include<stdio.h>
main()
{
    int la[10]={34,345,35,546,6,456,346,23,51,41}, lb=0,ub=9, max=-10000;

    int k=lb;
    while(k<=ub)
    {
        if(max<la[k])
        {
          max=la[k];

        }
         k++;

    }
printf("%d ",max);

}
