#include<stdio.h>
#include<math.h>

main()
{
	int i, n;
	do 
	{
		printf("Nhap n : "); scanf("%d",&n);
		if(n<0)
		printf("Nhap lai");
	} while(n<0)
	for(i=1;i<=n;i++) 
	{
		int dem=0;
		for(int j=1;j<=i;j++)
		if (i%j==0)
			dem++;
		if(dem==2);
		s = s+i;
	}
	printf("Tong cac so nt tu 1-n",s);
	return 0;	
}
