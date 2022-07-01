#include<stdio.h>
main()
{
	int i, n, dem=0;
	printf("Nhap n : "); scanf("%d",&n);
	for (i=1;i<=n;i++)
		if(n%i==0)
		dem = dem + 1;
	if(dem==2)
		printf("\n n la so nguyen to");
	else 
		printf("\n n ko la so nguyen to");
	return 0;
}
