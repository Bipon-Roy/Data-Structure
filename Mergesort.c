#include<stdio.h>
void mergesort(int a[20],int b[20],int low,int high);
void merge(int a[20],int b[20],int low,int mid,int high);
void mergesort(int a[20],int b[20],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=((low+high)/2);
        mergesort(a,b,low,mid);
        mergesort(a,b,mid+1,high);
        merge(a,b,low,mid,high);
    }
}
void merge(int a[20],int b[20],int low,int mid,int high)
{
   int i,h,j,k;
   i=low;h=low;j=mid+1;
   while((h<=mid)&&(j<=high))
   {
       if(a[h]<=a[j])
       {
           b[i]=a[h];
           h++;
       }
       else{
          b[i]=a[j];
           j++;
       }
       i++;
   }
   if(h>mid)
   {

    for(k=j;k<=high;k++)
   {
       b[i]=a[k];
       i=i+1;
   }
   }
   else
    {for(k=h;k<=mid;k++)
   {
    b[i]=a[k];
       i=i+1;
   }
    }
   for(k=low;k<=high;k++)
   {
       a[k]=b[k];
   }
    }

main()
{
    int i,n,a[20],b[20];
    printf("Please Enter The Number Of Elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
         mergesort(a,b,0,n-1);
         printf("The Sorted Array Is :");
         for(i=0;i<n;i++)
    {
         printf("%d ",b[i]);
    }
}
