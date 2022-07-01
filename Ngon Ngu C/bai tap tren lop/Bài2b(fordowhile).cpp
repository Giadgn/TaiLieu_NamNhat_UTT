//bài 2(b)
//tính S=1+1/2+...+1/n
#include<stdio.h>
#include<math.h>
main()
{
	int n;
	float i, S=0; 
	printf("Nhap n : "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		S=S+1/i;
	}
	printf("Tong S=%g",S);
	return 0;
}
