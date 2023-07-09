#include<stdio.h>
main()
{
    int la[100]={20,10,50,40,70,80,500,300,90,900},n=9,k=6,item=la[k];
    int j=k;

while(j<=n-1)
{
 la[j]=la[j+1];
 j=j+1;
}
n=n-1;
for(int i=0;i<=n;i++)
{
  printf("%d ",la[i]);
}


}

