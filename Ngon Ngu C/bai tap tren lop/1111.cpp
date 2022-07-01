#include<stdio.h>
main()
{
	int a[10],i,n;
	printf("Nhap n : "); scanf("%d",&n);
	for(i=-1;i<n;i++)
	if((a[i]<0))			
	printf("Dem am =%d ", a[i]);
	return 0;
}
