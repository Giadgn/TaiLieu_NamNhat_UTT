//nhâp vào sô nguyen n>0 va n<5000. Tìm các sô hoàn hao trong khoang tu 1 dên n.
#include<stdio.h>
#include<math.h>
main()
{
	int n, i, T;
	do {
	printf("Nhap n : "); scanf("%d",&n);
	if ((n<0)||(n>5000))
		printf("Nhap lai\n");
	} while ((n<0)||(n>5000));
	printf("Cac so hoan hao trong khoang 1 den n \n");
	for (i=1;i<=n;i++)
	{
		T=0;
		for(int j=1;j<i;j++)
		if(i%j==0) 
			{
			T = T +j;
			if(T==i)
			printf("%d\n",i);
			}
	}
	return 0;
}
