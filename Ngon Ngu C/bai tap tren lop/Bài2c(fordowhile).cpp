//Bài 2(c)
//S1=1!+2!+...+n!
#include<stdio.h>
#include<math.h>
main()
{
	int n,i,gt;
	int S1=0;
	printf("nhap n : ");scanf("%d",&n);
	gt=1;
	for(i=1;i<=n;i++)
	{
		gt=gt*i;
		S1=S1+gt;
	}
	printf("tong S1=%d",S1);
	return 0;
}
