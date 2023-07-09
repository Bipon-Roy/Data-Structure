#include<stdio.h>
void maxmin(int i,int j);
int num[30],max,max1,min,min1;
main()
{
int n,i;
printf("Enter How Many Element You want To Store :");
scanf("%d",&n);
printf("Enter Elements :");
for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);

}
maxmin(0,n-1);
printf("Maximum Element Is=%d\n",max);
printf("Minimum Element Is=%d",min);
}
void maxmin (int i,int j)
{
    if(i==j)
    {
        max=min=num[i];
    }
        else if(i==j-1)
        {
            if (num[i]<num[j])
            {
                max=num[j];
                min=num[i];
            }
            else
            {
                max=num[i];
                min=num[j];
            }

        }
        else
            {
                int mid=(i+j)/2;
        maxmin(i,mid);
        max1=max;
        min1=min;
        maxmin(mid+1,j);
        if(max<max1)
        {
            max=max1;
        }
        if(min>min1)
        {
            min=min1;
        }
            }
    }
