#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int a[10],item,n,i,j;

int startt,endt,timesort;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element to be inserted\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
startt=clock();
for(i=1;i<n;i++)
{
item=a[i];
j=i-1;
while(j>=0 && item<a[j])
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=item;
}
endt=clock();
timesort=endt-startt;
printf("sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("time taken=%d\n",timesort);
return 0;
}

