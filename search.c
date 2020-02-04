#include<stdio.h>
int main()
{
	int t,n,i,j,key,a[10],l,h,f=0;
	printf("Enter the number of testcases\n");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		printf("\nEnter the number of elements in array and element to be searched\n");
		scanf("%d %d",&n,&key);
	
		printf("Enter the elements of array\n");
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++)
		
		{
			
			if(a[j]==key)
			{
				printf("1 (Element is present)\n");
					f=1;				
					break;
			}
		}
		
		
		if(f==0)
		printf("-1 (Element is not present)\n");
	
	}
	return 0;
}
