#include<stdio.h>
#include<math.h>
main()
{
	int m, n;
	do 
	{
		printf("\n Nhap n, m: "); scanf("%d%d",&n,&m);
		if ((n<0)||(m<0)) printf("\n Nhap lai : ");
	} while ((n<0)||(m<0))
	while (n!=m)
	{
		if(n>m) n=n-m;
		else
			m=m-m;
	}
	ucln = n;
	printf("\n UCLN = %d",ucln);
	return 0;	
}
