#include<stdio.h>
main()
{
int data[5]={10,25,40,15,20};       //step_1
int k=0,loc=-1,n=4,item=10;         //step_1


while(loc==-1 && k<=n)              //step_2
{

 if(item==data[k]) //step_3
 {
 loc=k;            //step_4
 }
 k=k+1;
}
if(loc==-1)        //step_5
 {
  printf("%d is not in the array data",item);
 }
else
{
 printf("%d is the location of item %d",loc,item);
}

}


