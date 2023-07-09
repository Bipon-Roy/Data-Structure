#include<stdio.h>
main()
{
 int array[20],i,item,n;
 void binary(int x[],int beg,int mid,int y);
  printf("Enter How Many Element You want To Store :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&array[i]);
 }
 printf("Enter The Number To Be Found :");
 scanf("%d",&item);
 binary(array,0,n,item);
}
void binary(int x[],int beg,int end,int y)
{
int mid;
if(beg<=end)
{
    mid=(beg+end)/2;
}
if(x[mid]==y)
{
   printf("Number Found %d",mid);
}
else if(y<x[mid])
{
    binary(x,beg,mid-1,y);
}
else
{
    binary(x,mid+1,end,y);
}

}
