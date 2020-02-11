#include<stdio.h>
int euclid(int m,int n)
{
if(n==0)
{
return m;
}
else
{
return euclid(n,m%n);
}

}
void main()
{
int m,n;
printf("enter any 2 numbers");
scanf("%d%d",&m,&n);
m=euclid(m,n);
printf("%d\n",m);
}
