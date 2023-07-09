#include<stdio.h>
main()
{
    int la[100]={34,345,35,546,6,456,346,23,51,41},n=9,k=6,item=999;
    int j=n;

while(j>=k)
{
 la[j+1]=la[j];
 j=j-1;
}
la[k]=item;
n=n+1;
for(int i=0;i<=n;i++)
{
  printf("%d ",la[i]);
}


}
